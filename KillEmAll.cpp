 #include<bits/stdc++.h>



    using namespace std;

    int main()
    {
        //freopen("in.txt", "r", stdin);

        int i, j, k;
        long long n, m, q, r;

       cin>>q;
        while(q--)
        {
            cin>>n>>r;

            set<long long, greater<long long>> s;

            for(i = 0; i < n; i++)
                cin>>m;
                s.insert(m);

            long long mult, cnt = 0;
            auto itr = s.begin();

            while(itr != s.end())
            {
                mult = cnt * r;
                if(*itr - mult <= 0)
                    itr++;
                else
                    cnt++, itr++;
            }

            cout<<cnt<<endl;
        }


        return 0;
    }
