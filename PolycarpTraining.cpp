#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin>>x;
    vector<long> v;
    for(long i=0;i<x;i++)
    {
        long a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int p=1;
	for(int i=0;i<x;i++)
        {
		if(v[i]>=p)
		p++;
	}

	cout<<p-1<< endl;

    return 0;
}