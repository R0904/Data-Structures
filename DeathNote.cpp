#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    vector< int > v;
     for(int i = 0; i <x; i++)
        {
            int z;
            cin>>z;
       v.push_back(z);
     }
     int c=0;
     for(int i=0;i<x;i++)
     {
         c+=v[i];
         cout<<c/y<<endl;
         if(c/y>0)
         {
             c=c-y*int(c/y);
         }
     }
    return 0;
    }

