#include <iostream>
using namespace std;

int main()
{
     int b[3]={0};
	 ios::sync_with_stdio(false);
    int n,m;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>m;
        b[m-1]=b[m-1]+1;
    }

    cout<<n-max(max(b[0],b[1]),b[2]);
}
