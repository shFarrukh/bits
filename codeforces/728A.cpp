#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a*b==c)
        cout<<"Yes"<<endl<<a<<" "<<b<<" "<<c;
    else if(c*b==a) cout<<"Yes"<<endl<<c<< " "<<b<<" "<<a;
    else if(c*a==b) cout<<"Yes"<<endl<<c<<" "<<a<<" "<<b;
    else
        cout<<"No";


}
