#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  k,r,i=1;
    cin>>k>>r;
    while(((k*i)-r)%10!=0)
    {
        if(k*i%10==0)
            break;
        i++;
    }
    cout<<i;
}
