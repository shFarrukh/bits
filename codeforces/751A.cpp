#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,c=0,s;
    cin>>n;
    int a[n];
    //cin>>a>>b;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    for (int i=1;i<n-1;i++)
    {
        if(a[i-1]>3 && a[i]>3 && a[i+1]>3)
        {c++;i+=2;}
    }
    cout<<c;

}
