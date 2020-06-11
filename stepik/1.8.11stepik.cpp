#include <bits/stdc++.h>

int main()
{
    using namespace std;
    int n,m,c=0,x=-1,y=0;
    std::cin>>n>>m;
    int a[n+1][m+1]={0};
    for (int t=0;t<m+n-1;t++)
    {
        if (t>=m) y++;
        else x++;
        for (int i=y,j=0; i<=t & i<n ;i++,j++)
        {
          c++;
            a[i][x-j]=c;


        }
    }
    for (int i=0; i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout<<setw(4)<<a[i][j];
        }
        cout<<"\n";
    }



}
