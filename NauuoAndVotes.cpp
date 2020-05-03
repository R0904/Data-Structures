#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,a;
    cin>>n>>x>>a;
    int r,s;
    r=abs(n-x);
    s=n-x;
    if(r<=a&&a!=0)
        cout<<"?"<<endl;
    else{
                if(s<0)
        cout<<"-"<<endl;
    else if(s>0)
        cout<<"+"<<endl;
    else
        cout<<"0"<<endl;
    }
    return 0;
}
