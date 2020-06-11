#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,o=0;
    cin>>n>>k;
    string t="",a="abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<n;i++)
    {
        t=t+a[i%k];
    }
    cout<<t;
}
