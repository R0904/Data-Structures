#include <iostream>

using namespace std;

int main()
{
    int a,e,c=0,d=0;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int b;
        cin>>b;
        if(b<0)
            d+=b;
        else
            c+=b;
    }
    e=c-d;
    cout<<e<<endl;
}
