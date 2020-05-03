#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> a;
    a.push_back("red");
    a.push_back("purple");
    a.push_back("yellow");
    a.push_back("green");
    a.push_back("orange");
    a.push_back("blue");
    vector<string> d;
    d.push_back("Reality");
    d.push_back("Power");
    d.push_back("Mind");
    d.push_back("Time");
    d.push_back("Soul");
    d.push_back("Space");
    int x;
    cin>>x;
    string b[x];
    for(int i=0;i<x;i++)
    {
       cin>>b[i];
    }
    vector<string> c;
    for(int i=0;i<6;i++)
    {
        bool f=false;
        for(int j=0;j<x;j++)
        {
            if(a[i]==b[j])
                f=true;
        }
        if(f==false)
            c.push_back(d[i]);
    }
    cout<<c.size()<<endl;
    for(int i=0;i<c.size();i++)
    {
        cout<<c[i]<<endl;
    }

    return 0;
}
