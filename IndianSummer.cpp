#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,c=0;
    cin>>x;
    int t=x;
    vector<string> v;

        cin.ignore();
while (t--)
    {
        string str;
        getline(cin, str);
        v.push_back(str);

    }
    for(int i=0;i<x;i++)
        {

        bool b=false;
        for(int j=i-1;j>=0;j--)
        {
            if(v[i]==v[j])
                b=true;
        }
        if(b==false)
        {

        c++;
        }

    }
    cout<<c<<endl;

    return 0;
}
