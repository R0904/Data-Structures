
#include<bits/stdc++.h>

using namespace std;
int main(){

    long n , q; 
    cin>>n>>q;
    set<long> st;
    vector<long> a;
    vector<vector<long> > b(n + 1);
    long last=0;

    for(long t = 0; t < q; t++){
        long w, x;
        cin>>w>>x;
        if(w == 1)
            {
                a.push_back(t); 
        b[x].push_back(t);
         st.insert(t);
        }
        else if(w == 2)
            {
                for(int u = 0; u < b[x].size();++ u)
                    {
                        st.erase(b[x][u]);
                }
                 b[x].clear();
                }
        else if(w == 3)
            {
                while(last < x)
                {
                    st.erase(a[last]); 
        last++;
        }
        }
        cout<<st.size()<<endl;
    }

    return 0;
}