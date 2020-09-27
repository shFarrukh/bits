#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long z,o,u,min1,nor,max1,s;
    cin>>z>>o>>u;
    max1=max(max(o,z),max(z,u));
    min1=min(min(o,z),min(z,u));
    nor=(o+u+z-max1-min1);
    if(z==o && o==u)
    {cout<<0;return 0;}
    s=max1-min1+max1-nor-2;
    if(max1==nor)
    s=max1-min1-1;
    if( min1== nor )
    {
        s=(max1-nor-1)*2;

    }

    cout<<s;

}
