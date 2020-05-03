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
    int n,a,b;
    cin>>n>>a>>b;
    string k;
    cin>>k;
    if(k[a-1]==k[b-1])
        cout<<"0"<<endl;
    else
        cout<<"1"<<endl;
    return 0;
}
