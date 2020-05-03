
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y;
    cin >>x>>y;

   multimap<int,int> m;
    for(int i=0;i<y;i++)
    {
        int a,b;
        cin>>a>>b;
        m.insert(pair <int, int> (a, b));
    }
    bool b=true;

     multimap <int, int> :: iterator itr;

    for (itr = m.begin(); itr != m.end(); ++itr)
    {

        if(x<(itr->first))
        {
            cout<<"NO"<<endl;
             b=false  ;
            break;
        }
        else if(x>(itr->first))
            {
            x=x+itr->second;
        }
        else
          b=false  ;
    }
    if(b==true)
        cout<<"YES"<<endl;
        return 0;
}



