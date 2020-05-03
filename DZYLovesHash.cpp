#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,p,c=0;
    cin>>p>>n;
    int v[n];
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v[i]=a%p;
    }

    bool b=false;
    for(int i=0;i<n;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(v[i]==v[j])
            {
                b=true;
            }
        }
        c++;
        if(b==true)
            break;
    }
    if(b==true)
        cout<<c<<endl;
        else
            cout<<"-1"<<endl;
    return 0;
}
