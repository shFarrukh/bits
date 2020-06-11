#include <bits/stdc++.h>
using namespace
 std;
 int main()
 {
     int r1,r2,r3,t1,t2,n,s=0,a,b,c=0,d=0,f;
     cin >> n >> r1 >> r2 >> r3 >> t1 >> t2;
    cin>> c >> d;
    s = s + abs(c-d) * r1;
    for (int i=1; i<n; i++)
    {
        cin>> a >> b;
        f = abs(d-a);
        s += (abs(a-b)*r1);
        s += t1*r1*(f>=t1)+f*r1*(f<t1);
        f -= t1;
        s += t2*r2*(f>=t2)+f*r2*(f<t2&&f>0);
        f -= t2;
        s += f*(f>0)*r3;
        c = a;
        d = b;
    }
    cout<< s;

