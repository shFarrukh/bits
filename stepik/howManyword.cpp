#include <bits/stdc++.h>
using namespace std;

int main() {
    string n,s;
    getline(cin,n);
    int mx=0,k=0,l=0;
    n+=" ";
    while(1)
    {
        k=n.find(" ");
        if (k==-1) break;
        if (mx < (k-l) )
        {
                s=n.substr(l,k-l);
                mx=k-l;
        }
        l=k;
        n.replace(k,1,"");


    }
    cout<<s;



}
