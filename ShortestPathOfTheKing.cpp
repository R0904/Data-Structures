#include <bits/stdc++.h>
using namespace std;


#define             fast                        ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define             whilen                      while (n--)
#define             llu                         unsigned long long
#define             lld                         long long
#define             U                           unsigned int
#define             c(str)                      cin >> str
#define             g(str)                     	getline (cin,str)
#define             vi                          vector <int>
#define             vlld                        vector <lld>
#define             si                          set <int>
#define             slld                        set <lld>
#define             ss                          set <string>
#define             vs                          vector <string>
#define             pii                         pair <int,int>
#define             mii                         map <int,int>
#define             msi                         map <string,int>
#define             pb                          push_back
#define             in                          insert
#define             B                           begin()
#define             E                           end()
#define             rB                          rbegin()
#define             rE                          rend()
#define             F                           first
#define             S                           second
#define             iterate(it,x)               for (it=x.B; it!=x.E; it++)
#define             riterate(rit,x)             for (it=x.rB; it!=x.rE; it++)
#define             sortR(x,a,b)            	sort (x.B+a,x.B+b+1)
#define             rev(x)                  	reverse (x.B,x.E)
#define             revR(x,a,b)             	reverse (x.B+a,x.B+b+1)
const int MOD = 1000000007;
const int MAX = 100005;

int main()
{
    string s,t;
    cin>>s>>t;
    char a,b;
    int x,y;
    stringstream z;
    stringstream z2;
    z<<s;
    z>>a>>x;
    z2<<t;
    z2>>b>>y;
    int dif1,dif2,mov;
    mov=max(abs(a-b),abs(x-y));
    cout<<mov<<endl;
    for(int i=0;i<mov;i++)
    {
        if(b>a&&y<x)
        {
            a++;
            x--;
            cout<<"RD"<<endl;
        }
        else if(b>a&&y>x)
        {
            a++;
            x++;
            cout<<"RU"<<endl;
        }
          else if(b<a&&y>x)
        {
            a--;
            x++;
            cout<<"LU"<<endl;
        }
        else if(b<a&&y<x)
        {
            a--;
            x--;
            cout<<"LD"<<endl;
        }
        else if(b==a&&y>x)
        {
            x++;
            cout<<"U"<<endl;
        }
        else if(b==a&&y<x)
        {
            x--;
            cout<<"D"<<endl;
        }
        else if(b>a&&y==x)
        {
            a++;
            cout<<"R"<<endl;
        }
        else if(b<a&&y==x)
        {
            a--;
            cout<<"L"<<endl;
        }
        else
            ;
    }



    return 0;
}
