#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int s=0,k=0,a;
    for (int i=n.size()-1;i>=0;i--)
    {
        if(n[i]=='7')
            a=2;
        else
            a=1;
        s=s+a*powl(2,k);
        k++;
    }
    cout<<s;
}
