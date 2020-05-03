#include <iostream>

using namespace std;

int main()
{
    string s,t,u="";
    cin>>s>>t;
    int a=s.length();
    for(int i=0;i<a;i++)
    {
        if(s[i]=='0'&&t[i]=='0')
            u+="0";
        else if(s[i]=='1'&&t[i]=='0')
            u+="1";
           else if(s[i]=='0'&&t[i]=='1')
            u+="1";
            else
                u+="0";
    }
    cout<<u<<endl;
    return 0;
}
