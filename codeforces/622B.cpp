#include <bits/stdc++.h>
using namespace std;
int main()
{
    char x[4],y[4];
    int a,b,k,t=0;
    string n,m,s;
    cin>>n>>k;
    m=n.substr(0,2);
    s=n.substr(3,2);
    a=atoi(m.c_str());
    b=atoi(s.c_str());
    t=a*60+b+k;
    itoa((t/60)%24,x,10);
    itoa(t%60,y,10);
    n=x;
    m=y;
    if(n.size()==1)
        n="0"+n;
    if(m.size()==1)
        m="0"+m;
    cout<<n<<":"<<m;

}
