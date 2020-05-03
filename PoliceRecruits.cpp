#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int min=0,sum=0;
    for(int i=0;i<x;i++)
    {
        int a;
        cin>>a;
        sum+=a;
        if(sum<min)
            min=sum;
    }
    cout<<abs(min)<<endl;


    return 0;
}
