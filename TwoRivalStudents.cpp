#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y;
    cin>>y;
    for(int i=0;i<y;i++){
    int n,x,a,b;
    cin>>n>>x>>a>>b;
    int r;
    r=x+abs(a-b);
    if(r>=n)
        cout<<n-1<<endl;
    else
        cout<<r<<endl;
    }
    return 0;
}
