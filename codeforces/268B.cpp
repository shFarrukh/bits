#include <bits/stdc++.h>
using namespace
 std;
 int main()
 {
     long long  n,s=0;
     cin>>n;
     for (int i=1;i<=n;i++)
        {

            s=s+(n-i)*i;
        }
     cout<<s+n;
 }
