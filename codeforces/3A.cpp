#include <bits/stdc++.h>
using namespace std;
int main()
{
    string  a,b;
    cin>>a>>b;int s=0;
    vector  <string> n;
    /*char a1,a2,b1,b2;
    a1=a[0];a2=a[1]*/
     while (a[0]!=b[0] || a[1]!=b[1])
    {
        if(a[0] < b[0])
        {
            if(a[1] < b[1])
                { a[0]++;a[1]++;n.push_back("RU");}
            else if(a[1] > b[1])
            {a[0]++;a[1]--;n.push_back("RD");}
            else //(a[1]==b[1])
            { a[0]++;n.push_back("R");}

        }
       else  if(a[0] > b[0])
        {
             if(a[1] < b[1]){ a[0]--;a[1]++;n.push_back("LU");}
             else if(a[1] > b[1]){a[0]--;a[1]--;n.push_back("LD");}
            else  //(a[1]==a[2])
                {a[0]--;n.push_back("L");}
        }
        else //(a[0]==b[0])a
        {
             if(a[1] < b[1]){ a[1]++;n.push_back("U");}
            else if(a[1] > b[1]){a[1]--;n.push_back("D");}


        }
        s++;


    }
    cout<<s<<endl;
    for (int i=0;i<n.size();i++)
        cout<<n[i]<<endl;
}
