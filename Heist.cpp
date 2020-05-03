#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,dif;
    cin>>x;
    vector<int> v;
    for(int i=0;i<x;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    dif=v[x-1]-v[0];

    cout<<dif - x+1<<endl;


    return 0;
}
