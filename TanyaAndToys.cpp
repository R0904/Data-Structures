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
    int s,t;
    cin>>s>>t;
    set<int> v;
    for(int i=0;i<t;i++)
    {
        v.insert(i+1);
    }
    for(int i=0;i<s;i++)
    {
        int a;
        cin>>a;
        v.erase(a);
    }
    int r = 0;
    int d=0;
for(set< int >::const_iterator it = v.begin(); it != v.end(); it++)
    {
r += *it;
if(r<=t)
    d++;
    else
        break;
}
cout<<d<<endl;

    int c=0;
for(set< int >::const_iterator it = v.begin(); it != v.end(); it++) {
c += *it;


        if(c<=t)
        {
            cout<<*it<<" ";
        }
        else
            break;
    }
    return 0;
}
