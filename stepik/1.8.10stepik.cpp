#include <iomanip>
#include <iostream>

int main() {
    using namespace std;
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for (int i=0; i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
           if (i%2==0)
            a[i][j]=m*i+j+1;
           else
            a[i][j]=(m)*(i+1)-j;
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


  return 0;
}
