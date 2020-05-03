#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
const int MAX = 100005;
const double PI = acos(-1.0);

int SetBit (int n, int X) { return n | (1 << X); }
int ClearBit (int n, int X) { return n & ~(1 << X); }
int ToggleBit (int n, int X) { return n ^ (1 << X); }
bool CheckBit (int n, int X) { return (bool)(n & (1 << X)); }

double arr[MAX];

int main()
{
        int tc,pos,n,x,i,ans;
    double sum,avg;

    cin>>tc;

    for (pos=1; pos<=tc; pos++) {
        cin>>n>>x;

        for (i=0; i<n; i++)
            cin>>arr[i];

        sort (arr,arr+n);

        sum = avg = 0.0;
        ans = 0;

        for (i=n-1; i>=0; i--) {
            sum += arr[i];
            avg = sum/(double(n-i));

            if (avg >= x) ++ans;
            else break;
        }

        cout<<ans<<endl;
    }

    return 0;
}
