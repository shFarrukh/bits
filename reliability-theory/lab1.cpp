#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <vector>
#include  <bits/stdc++.h>


using namespace std;
vector <double> t; // Array for product uptime.
vector <double> range;
double t_max=0.0, Dt, M;
int N=100, n;
// Replacing commas with points
void  coma_to_point( string &s)
{
    int k=0;
    int i=0;
    while (k!= -1)
    {
        k=s.find(',');
        if (k!= -1)
            s.replace(k,1, ".");
    }
}
//Adding to array and finding Max element.
void Add_to_Array(string text)
{
    int pos=0;
    text+= " ";
    double summ=0.0;//
    while(pos != -1)
    {
        pos = text.find(" ");
        if (pos != -1)
        {
            double temp1;
            string temp;
            temp=text.substr(0,pos+1);
            temp1 = atof(temp.c_str());
            t.push_back(temp1);
            summ+=temp1;
            if (temp1 > t_max) t_max = temp1;
            text.replace(0,pos+1,"");
        }
    }

    M=summ/N;// Mean time between failures

}
void parsing(string file)
{
    ifstream fff(file.c_str());
    while (!fff.eof())
    {
        string data;
        getline(fff,data);
        coma_to_point(data);
        Add_to_Array(data);


    }
    fff.close();
}
void show(int* mass, int n)
{
    for (int i=0; i<n;i++)
        cout<<mass[i]<<" ";
    cout<<"\n";
}
void computation()
{
    //range table
    ofstream file("DataInrvl20.csv");
    file <<"ti-ti_1 "<<"Dr "<<"Lambda "<<"*a "<<"*p \n";
    double counter=0.0;
    while (counter< t_max)
    {
        counter+=Dt;
        range.push_back(counter);
    }
    int r=0;
    for (int i=1;i<range.size();i++)
    {
        int dr=0;
        double lambda, a;
        long double p;
        for (int j=0;j<t.size();j++)
        {
            if(t[j]>range[i-1] && t[j]<= range[i])
                dr++;
        }
        lambda= dr/(double(N-r)*Dt);
        r+= dr;
        a=dr/(N*Dt);
        p=1-(double(r)/double(N));
        cout<<"("<<setw(7)<<range[i-1]<<"-"<<setw(7)<<range[i]<<" )";
        cout<<setw(3)<<dr<<setw(15)<<lambda<<setw(15)<<a<<setw(15)<<p<<setw(15)<<lambda*p-a<<"\n";
        file<<range[i]<<"; "<<dr<<"; "<<lambda<<"; "<<a<<"; "<<p<<"\n";
    }

}
int main()
{
    cout<<"Number of intervals:";
    cin>>n;
    parsing("L1_out.txt");
    range.push_back(0.0);
    sort(t.begin() , t.end());
    Dt = t_max/n;
    cout<<" Dt = "<<Dt<<"\n";
    computation();



}
