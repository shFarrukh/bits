# include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    long long a[n][2];
    vector<vector<long long> > pill(n, vector<long long>());
    for (int i=0; i<n; i++)
    {
        cin>>a[i][0]>>a[i][1];
    }
    int poz=0,mx=0;
    for (int i=0; i<n; i++)
    {
        int sum_pills = a[i][0] + a[i][1]-1;
        pill[i].push_back(a[i][1]);
        pill[i].push_back(i);
        for (int t=i; t<n; t++)
        {
            if (sum_pills < a[t][0])
            {
                sum_pills =(a[t][0] + a[t][1]-1);
                pill[i][0]+=a[t][1];
                pill[i].push_back(t);
            }
        }
        cout<<pill[i][0]<<" ";
        if (mx<pill[i][0])
        {
            mx=pill[i][0];
            poz=i;
        }
    }
    cout<<pill[poz][0]<<endl;
    for (int i=1; i<pill[poz].size(); i++)
    {
        cout<<pill[poz][i]<<" ";
    }
}
