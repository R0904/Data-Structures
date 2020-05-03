#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   string a[5];
   cin>>s;
   bool b=false;
   for(int i=0;i<5;i++)
   {
       cin>>a[i];
   }
   for(int i=0;i<5;i++)
   {
       if(s[0]==a[i][0]||s[1]==a[i][1])
       {
           b=true;
           break;
          }
   }
   if(b==true)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;

    return 0;
}
