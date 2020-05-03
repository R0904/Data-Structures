#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    string s;
    cin>>a;
    cin>>s;
    int d=0;
    for(int i=0;i<a;i++)
    {
        if(s[i]=='x'&&s[i+1]=='x')
            {
                int c=0;
            for(int j=i+2;j<a&&s[j]=='x';j++)
        {
                c++;

            }
            i=i+2+c;
            d=d+c;
        }
    }
    cout<<d<<endl;
    return 0;
}
