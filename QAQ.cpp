#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c,f;
    string s;
    cin>>s;
    for(int i=s.length()-1;i>=0;i--)
    {
        if(s[i]=='Q'){
                c=i;
            break;
        }
    }
    for(int i=0;i<=c;i++)
    {
        if(s[i]=='Q'){
                f=i;
            break;
        }
    }
    int d=0;
    for(int i=c;i>=f;i--)
    {
        if(s[i]=='Q'){
                d++;
        }
    }
    int e=0;
    for(int i=c;i>=f;i--)
    {
        if(s[i]=='A'){
                e++;

        }
    }
    cout<<e*(d-1)<<endl;

    return 0;
}
