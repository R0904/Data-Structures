#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,c=0;
    cin>>x>>y;
    vector<int> v;

    for(int i=0;i<x;i++)
    {
        int b;
        cin>>b;
        v.push_back(b);

    }
    v.push_back(10000);
    int max=0;
    for(int i=0;i<x;i++)
        {
         if(v[i]-v[i+1]>max)
            max=v[i]-v[i+1];
    }
    if(max-y>=0)
    cout<<max-y<<endl;
    else
        cout<<"0"<<endl;

    return 0;
}

