#include <bits/stdc++.h>
using namespace std;
void chlong(string n,int a)
{
    a=0;
    for (int i=0;i<n.size();i++)
    {
        a=a+n[i]-48;
    }

}
long long summch(string n)
{
    long long a;
    for (int i=0;i<n.size() ;i++)
    {

    }
}
int main()
{
    int s=0;
    string n;
    cin>>n;
    n='a'+n;
    for (int i=0;i<(n.size()-1);i++)
    {
        if ((26-abs(int(n[i+1])-int(n[i])))<(abs(int(n[i+1])-int(n[i]))))
        s=s+(26-abs(int(n[i+1])-int(n[i])));
        else
            s=s+(abs(int(n[i+1])-int(n[i])));
    }
    cout<<s;
}
