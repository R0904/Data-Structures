#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(b-a==0)
        cout<<b<<endl;
   else if(b-a==1||b-a==2)
        cout<<"2"<<endl;
        else if(b-a==3&&b%3==0)
            cout<<"3"<<endl;
        else
            cout<<"2"<<endl;

    return 0;
}
