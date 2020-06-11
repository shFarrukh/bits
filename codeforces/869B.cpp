#include <iostream>
using namespace std;
int main()
{
    long long a,b;
    int s=1;
    cin>>a;
    cin>>b;
    if(b-a>=10){cout<<0;return 0;}
    for (long long i=a+1;i<=b;i++)
    {
        s=s*(i%10);
        s=s%10;
    }
    cout<<s;
}
