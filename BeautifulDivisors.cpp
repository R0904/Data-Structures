#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin>>x;
    vector<long> v;
    int a=1,i=2;
    while(a<100000)
        {
            a=((int)pow(2,i)-1)*(int)pow(2,i-1);
            i++;
        v.push_back(a);
    }
    int d=1;
    for(int i=0;i<v.size();i++)
    {
        if(x%v[i]==0)
            d=v[i];
    }
    cout<<d<<endl;

    return 0;
}
