#include <bits/stdc++.h>
using namespace std;
int main()
{
    map <int ,int > m;
    map <int ,int >::iterator t;
    int n,k,c=0,d;
    cin>>n>>d;
    for (int i=0;i<n;i++)
    {
        cin>>k;
        m[k]++;
        m[k+d]++;
    }
    for ( t=m.begin();t!=m.end();t++)
    {
        if((t->second)>1)
            c++;
    }
    cout<<c;

}
