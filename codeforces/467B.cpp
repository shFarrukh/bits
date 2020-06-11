#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k,c=0;
	cin>>n>>m>>k;
	int a[m+1];
	for(int i=0;i<m+1;i++)
	cin>>a[i];
	for(int i=0;i<m;i++)
	{
		if(__builtin_popcount(a[m]^a[i])<=k)
		c++;
	}
	cout<<c;
}
