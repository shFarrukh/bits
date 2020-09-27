#include <bits/stdc++.h>

using namespace std;
long long m[1010][110], mi[1010];
long long cnt[1010], p[1010], ans[1010];
set<pair<long long,long long> > st;

int main()
{
    long long n, kol = 0, t;
    cin >> n;
    long long min_v = 100000, nom = -1;
    for (int i = 1; i <= n; i++)
    {
        cin >> mi[i];
        for (int j = 1; j <= mi[i]; j++)
        {
            cin>>m[i][j];
        }
        sort(m[i] + 1, m[i] + 1 + mi[i]);
        for(int j = 1; j <= mi[i]; j ++)
        {
            if(m[i][j] == 0)
                p[i] = j;
        }
        p[i]++;
        // cout << i<<' '<<p[i]<<' '<<(p[i] -1) - (mi[i] - (p[i] - 1))<<'\n';
        st.insert({(p[i] -1) - (mi[i] - (p[i] - 1)), i});
    }
    cin>> t;
    while(true)
    {
        auto x = st.begin()->second;
        //cout << x<<' '<<p[x]<<' '<<t<<'\n';
        st.erase(st.begin());
        if(p[x] == mi[x] + 1)
        {
            ans[x] += t;
            break;
        }
        if(t > (m[x][p[x]] - ans[x]))
        {
            int q = (m[x][p[x]] - ans[x]);
            ans[x] += (m[x][p[x]] - ans[x]);
            t -= (q);
        }
        else
        {
            ans[x] += t;
            break;
        }
        while(p[x] <= mi[x] && m[x][p[x]] <= ans[x])
        {
            p[x]++;
        }
        st.insert({(p[x] -1) - (mi[x] - (p[x] - 1)), x});
    }
    for(int i = 1; i <= n; i ++)
    {
        cout << ans[i]<<' ';
    }


}
