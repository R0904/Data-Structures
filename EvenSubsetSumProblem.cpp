#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
    int r;
    cin>>r;
    int v[r];
    bool b=false;
    for(int i=0;i<r;i++)
    {
        cin>>v[i];
    }
    int x,y,min=1000;
     for(int i=0;i<r;i++)
    {
        if(v[i]%2==0)
        {
            b=true;
            x=i;
            break;
        }
        else
        {
            if(i<min){
            y=i;
            min =i;
            }
        }
    }
    int z,c=0;
    for(int i=0;i<r;i++)
    {
        if(v[i]%2!=0)
        {
            c++;
            if(c==2)
            {
                z=i;

            break;
        }}
    }
    if(r==1&&b==false)
    {
        cout<<"-1"<<endl;
    }
    else if(r==1&&b==true)
    {
        cout<<"1"<<endl;
        cout<<"1"<<endl;
    }
    else if(r>1&&b==true)
    {
        cout<<"1"<<endl;
        cout<<x+1<<endl;
    }
    else
    {
        cout<<"2"<<endl;
        cout<<y+1<<" "<<z+1<<endl;
    }

    }
    return 0;
}

