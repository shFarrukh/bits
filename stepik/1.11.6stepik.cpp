#include <bits/stdc++.h>
#include <map>
using namespace std;

void Add_to_map(map <string,string> &m,string latin, string eng);
void Remove_coma(string &n);

int main() {
    int n;
    cin>>n;
    map <string, string > m;
    map <string, string > ::iterator now=m.begin();
    for (int i=0;i<n;i++)
    {
        string eng,latin, musor;
        cin>>eng>>musor;
        getline(cin,latin);
        Add_to_map(m,latin,eng);
    }

    cout<<m.size()<<endl;
    for (now=m.begin(); now!=m.end(); now++){
        cout<<now->first<<" - "<<now->second<<endl;
    }
  return 0;
}

void Add_to_map(map <string,string> &m,string latin, string eng)
{
    int k=0;
    latin+=",";
    while (true)
    {
        k=latin.find(",");
        if (k==-1)break;
        string temp=latin.substr(0,k);
        if (latin=="")
                break;
        if (m[temp]!="")
        {
           m[temp]+= ", "+eng;
        }
        else
        {
            m[temp]=eng;
        }
        latin.replace(0,k+1,"");

    }
}
void Remove_coma(string &n)
{
    int k=n.find(",");
    if (k!=-1)
    n.replace(k,1,"");
}
