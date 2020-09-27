#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,k=0,s=0,m=0;
    cin>>n>>k;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (int i=0;i<n-1;i++)
    {
        m=k-a[i];
        if (a[i]+a[i+1]<k)
        {
            s+=m-a[i+1];
            a[i+1]=m;


          //cout<<m<<" ";
        }
    }
    cout<<s<<endl;
    for (int i=0;i<n;i++)
        cout<<a[i]<<" ";


}
