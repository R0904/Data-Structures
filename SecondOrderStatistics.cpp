#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin>>x;
    vector<int> v;
    bool b=false;
    for(int i=0;i<x;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    if(v[0]==v[x-1])
        cout<<"NO"<<endl;
        else
        {
    int min=v[0];
    int j=1;
    while(v[j]==min)
    {
        j++;
    }

    cout<<v[j]<<endl;
        }

    return 0;
}
