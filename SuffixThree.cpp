#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        string a;
        cin>>a;
        if(a[a.size()-1]=='u')
            cout<<"JAPANESE"<<endl;
        else if(a[a.size()-1]=='o')
            cout<<"FILIPINO"<<endl;
        else
            cout<<"KOREAN"<<endl;
    }
    return 0;
}
