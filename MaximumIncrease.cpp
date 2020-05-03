#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin>>x;
    vector< int > v;
     for(int i = 0; i <x; i++)
        {
            int y;
            cin>>y;
       v.push_back(y);
     }
     v.push_back(0);
     int min=0;
     int c=0;
     for(int i=0;i<x;i++)
     {
         if(v[i+1]>v[i])
         {
             c++;
             if(c>min)
            min=c;
         }
         else
            c=0;

}
cout<<min+1<<endl;

    return 0;
    }
