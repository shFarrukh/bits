#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> a(n);
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (int i=0;i<a.size();i++)
    {
        bool f=false;
        for (int t=0;t<a.size();t++)
        {
            if (a[i]==a[t] && i!=t)
            {
                f=true;
                //a.erase(t);
            }

        }
        if (!f)  cout<<a[i]<<" ";
    }
}
