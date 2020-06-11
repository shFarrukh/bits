#include <bits/stdc++.h>
using namespace std;
 map <string,int> m ;
 string a[100000];
void fshr(int n,string x)
{
    char f[20];
    int s=0;
    for (int i=0;i<n;i++)
    {
        if(x==a[i])
        {
            itoa(s,f,10);
            if(s==0)
            {
                a[i]="OK";
            }
            else
            {
                a[i]=a[i]+f;
            }
            s++;

        }
    }


}
int main()
{

    map  <string,int> :: iterator z;
    int n;
    cin>>n;
    string l;
    for(int i=0;i<n;i++)
    {
        cin>>l;
        if(m[l]++)
        {
            cout<<l<<m[l]-1<<endl;
        }
        else
        {
            cout<<"OK"<<endl;
        }
        //l=l+a[i]+" ";
    }
    //n=m.size();
    string q;
    for (z=m.begin();z!=m.end();z++)
    {
        q=z->first;
    }
    int k=-1,k1;
    while (k!=-1)
    {
        k=l.find(' ',k+1);
        k1=l.find(' ',k+1);
        if(k1!=-1)
        {
            cout<<l.substr(k+1,k1-k)<<endl;
        }
        else
        {
            cout<<l.substr(k+1);
            break;
        }
    }
     for (int t=n;t<n;t++)
     {
         cout<<a[t]<<endl;
     }

}
 
