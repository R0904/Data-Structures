#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,c,f=0;
    cin>>n>>c;
    vector<int> v;
     if(n==1)
    {
        int x;
        cin>>x;
        if(x<c)
        cout<<"-1"<<endl;
        else
            cout<<"0"<<endl;
    }
    else
    {


    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

       while(v[0]<c)
       {
           v[0]=v[0]*1+v[1]*2;
           v[1]=c+1000000000;
            sort(v.begin(),v.end());
           v.pop_back();

           f++;
    }

    cout<<f<<endl;
    }




    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

