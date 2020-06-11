#include <bits/stdc++.h>
using namespace
 std;
 int triugolnic(int a,int b,int c)
 {
     if(a+b>c && a+c>b && b+c>a)
        return 1;
      else
      return 0;

 }
 int khat(int a,int b,int c)
 {
     if(a+b==c || b+c==a || a+c==b )
        return 1;
     else
      return 0;


 }
 int main()
 {
     int a,b,c,d;
     cin>>a>>b>>c>>d;
     if(triugolnic(a,b,c)==1 || triugolnic(b,c,d)==1 || triugolnic(c,d,a)==1 || triugolnic(a,b,d)==1)
        cout<<"TRIANGLE";
     else if(khat(a,b,c)==1 || khat(b,c,d)==1 || khat(c,d,a)==1  || khat(a,b,d)==1 )
        cout<<"SEGMENT";
     else
        cout<<"IMPOSSIBLE";

 }
