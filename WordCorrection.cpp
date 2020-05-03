#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin>>x;
    string s,u="";
    cin>>s;
    int a=s.length();
    for(int i=0;i<a;i++)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y')
            u+=s[i];
            else if(s[i-1]!='a'&&s[i-1]!='e'&&s[i-1]!='i'&&s[i-1]!='o'&&s[i-1]!='u'&&s[i-1]!='y')
                u+=s[i];
            else
                ;


    }
    cout<<u<<endl;
    return 0;
}
