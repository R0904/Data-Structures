#include<bits/stdc++.h>
#define N 200001
#include<vector>
using namespace std;

int main(){

 int n,k,q,i;
        cin >> n >> k >> q;
        vector<int> v(N, 0);
        while(n!=0){
            int l, r;
            cin >> l >> r;
            v[l]++;
        	v[r+1]--;
            n--;
        }

        for(i=0; i<v.size()-1; i++)
        v[i+1]=v[i]+v[i+1];

        for(i=0; i<v.size(); i++){
            if(v[i]>=k)
            v[i]=1;
             else v[i]=0;
        }

        for(i=0; i<v.size()-1; i++)
        v[i+1]=v[i]+v[i+1];

        while(q!=0){
            int l, r;
            cin>> l >> r;
            cout<< v[r]-v[l-1] <<endl;
            q--;
        }

    return 0;
}