#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string a,b;
    for (int i=0;i<m-1;i++)
        {
            a=a+"#";
            b=b+".";
        }
        a=a+"#";
        for (int i=0;i<n;i++)
        {
            if((i+1)%2!=0)
                cout<<a;
                else {
            if(((i+1)/2)%2==1)
                cout<<b<<"#";
            else//((i+1/2)%2==0)
                    cout<<"#"<<b;
                    }
            cout<<endl;
        }


}
