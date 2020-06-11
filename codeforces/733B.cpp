#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,s=0,p=0,max1=0;
    cin>>n;
    int r[n],l[n];
    for (int i=0;i<n;i++)
    {
        cin>>r[i]>>l[i];
        s+=r[i];
        c+=l[i];
    }
    max1=abs(s-c);
    for (int i=0;i<n;i++)
    {
        s=s-r[i]+l[i];
        c=c-l[i]+r[i];
        if(abs(s-c)>max1)
        {
            max1=abs(c-s);
            p=i+1;
        }
            s=s-l[i]+r[i];
            c=c-r[i]+l[i];
    }
    cout<<p;

}
