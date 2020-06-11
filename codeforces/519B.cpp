#include <bits/stdc++.h>
using namespace std;
int fsh(int *a,int *b,int n)
{
    bool z;
    for (int i=0;i<n;i++)
    {
        z=false;
        for (int j=0;j<n-1;j++)
        {
            if(a[i]==b[j])
            {
                z=true;
                break;
            }
        }
        if(z==false)
        {
            return a[i];
        }
    }
}
int main()
{
    int n,s=0,s1=0,s2=0,a;
    cin>>n;
    //int a[n],b[n],c[n];
    for (int i=0;i<n;i++)
        {cin>>a;s+=a;}
    for (int i=0;i<n-1;i++)
        {cin>>a;s1+=a;
        }
    for (int i=0;i<n-2;i++)
        {cin>>a;s2+=a;}
        cout<<s-s1<<endl;
        cout<<s1-s2;


}
