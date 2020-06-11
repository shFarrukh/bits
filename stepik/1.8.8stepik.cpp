#include <iostream>

int main() {
    using namespace std;
    int n,m,k;
    cin>>n>>m;
    int a[n][m];
    for (int i=0; i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cin>>k;
    if (k>m) {cout<<0; return 0;}
    for (int i=0;i<n;i++)
    {
        int s=0;
        for(int j=0;j<m;j++)
        {
            if (a[i][j]==0)
            {
                s++;
            }
            else s=0;
            if (s == k){cout<<i+1; return 0;}
        }
    }
    cout<<0;

/*
    for (int i=0; i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
*/

  return 0;
}
