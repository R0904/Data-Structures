#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int r=x;
    vector <int> v;
    v.push_back(100);
    v.push_back(20);
    v.push_back(10);
    v.push_back(5);
    v.push_back(1);
    int c=0;
    while(r>=v[0])
    {
        r=r-v[0];
        c++;
    }

    while(r>=v[1])
    {
        r=r-v[1];
        c++;
    }
    while(r>=v[2])
    {
        r=r-v[2];
        c++;
    }while(r>=v[3])
    {
        r=r-v[3];
        c++;
    }while(r>=v[4])
    {
        r=r-v[4];
        c++;
    }
    cout<<c<<endl;
}
