#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long k,a,b,s;
    cin>>k>>a>>b;
    s=max(a,b);
    if(a>=k && b>=k)
    {
      cout<<a/k+b/k;
      return 0;
    }
    if(s%k==0)
    {
        cout<<s/k;
        return 0;
    }
    cout<<-1;



}
