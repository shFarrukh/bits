#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    char x='a';
    cin>>n;
    int k=0;
    for (int i=0;i<26;i++)
    {
        if(n.size()==0)
        break;
        if(n[0]=='a'+i)
        {

            k=0;
            while(k!=-1)
            {
                k=n.find('a'+i,0);
                if(k!=-1)
                {
                    n.replace(k,1,"",0);
                }
            }
        }
        else
        {
            cout<<"NO";
            return 0;
        }

    }
    cout<<"YES";
}
