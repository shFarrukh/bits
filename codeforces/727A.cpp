#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    vector <int> m;
    int s=0;
    cin>>n>>k;
    m.push_back(k);
    while (n<=k)
    { s++;
    if(n==k) break;
        if(k%2==0)
        {
               k=k/2;
                m.push_back(k);
        }
        else
        {
            if ((k-1)%10==0)
            {k=k/10;
            m.push_back(k);}
            else
               {
                cout<<"NO";
            return 0;
        }
        }



    }
     if (k<n)
            {
                cout<<"NO";
            return 0;
        }
    cout<<"YES";
    cout<<endl<<s<<endl;
    for (int i=m.size()-1;i>=0;i--)
        cout<<m[i]<< " ";


}
