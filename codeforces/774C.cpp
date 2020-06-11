#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string  a;
    for (int i=0;i<n/2;i++)
        a=a+"1";
    if(n%2==1)
    {
        a[0]='7';
    }
    cout<<a;

}
