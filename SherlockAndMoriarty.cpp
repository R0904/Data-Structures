#include <bits/stdc++.h>

using namespace std;

int g[6][6];

int main()
{
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    int max=0,min=1007;
    do
    {
        int c=0,d=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]<t[i])
                c++;
                if(s[i]>t[i])
                    d++;
        }
        if(c>max)
            max=c;
            if(d<min)
                min=d;

    }
    while(next_permutation(t.begin(), t.end()));

    cout << min <<endl;
    cout<<max<<endl;
    return 0;
}
