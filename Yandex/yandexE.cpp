#include <bits/stdc++.h>

using namespace std;

int n, m;
int rul_order[600];
int kola[600];
string ru[510];
vector<int> res;
int rules_alive[510];
int pos_alive[510];
bool used[600], rule_used[600];

bool solve(string s)
{
    int pos_sz = n;
    for (int i = 0; i < n; i++)
    {
        used[i] = false;
        pos_alive[i] = i;
    }
    int rul_sz = m;
    for(int i = 1; i <= m; i++)
    {
        rule_used[i] = false;
        rules_alive[i] = rul_order[i];
    }
    bool progress = true;
    while (true)
    {
        progress = false;
        for (int id = 1; id <= rul_sz; id++)
        {
            int i = rules_alive[id];
            bool fale = false;
            bool no_matches = true;
            if (rule_used[i])
                continue;
            for (int jd = 0; jd < pos_sz; jd++)
            {
                int j = pos_alive[jd];
                if (!used[j] && s[j] != ru[i][j] && ru[i][j] != '-')
                {
                    fale = true;
                    //break;
                    //continue;
                }
                if (s[j] == ru[i][j])
                    no_matches = false;
            }
            if (!fale)
            {
                bool cur_progress = 0;
                for (int jd = 0; jd < pos_sz; jd++)
                {
                    int j = pos_alive[jd];
                    if (!used[j] && s[j] == ru[i][j])
                    {
                        rule_used[i] = true;
                        progress = true;
                        used[j] = true;
                        cur_progress = 1;
                        swap(pos_alive[jd], pos_alive[pos_sz - 1]);
                        pos_sz--;
                        jd--;
                        //continue;
                    }
                }
                if (cur_progress)
                {
                    swap(rules_alive[id], rules_alive[rul_sz]);
                    rul_sz--;
                    id--;
                }
            }
        }
        if (!progress)
        {
            for (int i = 0; i < n; i++)
            {
                if (!used[i])
                {
                    return false;
                }
            }
            return true;
        }
    }
}

bool cmp(int a, int b)
{
    if (kola[a] > kola[b])
    {
        return 1;
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> n >> m >> s;
    for (int i = 1; i <= m; i++)
    {
        rul_order[i] = i;
        cin >> ru[i];
        for (int j = 0; j < n; j++)
        {
            kola[i] += (ru[i][j] == '-');
        }
    }
    ru[m + 1] = s;
    kola[m + 1] = 0;
    rul_order[m + 1] = m + 1;
    m++;
    sort(rul_order + 1, rul_order + 1 + m, cmp);
    string ans;
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> ans;
        if (solve(ans))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }


}

