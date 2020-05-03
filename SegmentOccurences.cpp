#include <bits/stdc++.h>

using namespace std;

const int N = 1007;

int p[N];
bool o[N];

int main() {
	int n, m, q;
	cin>>n>>m>>q;
	string s, t;
	static char b[N];
	scanf("%s", b);
	s = b;
	scanf("%s", b);
	t = b;

	p[0] = 0;
	for (int i = 0; i < int(n-m+1); i++)
        {
		bool fl = true;
		for (int j = 0;j< int(m); j++)
			if (s[i + j] != t[j])
				fl = false;
		o[i] = fl;
		p[i + 1] = p[i] + o[i];
	}
	for (int i = max(0, n - m + 1); i < n; ++i){
		p[i + 1] = p[i];
	}

	for (int i = 0; i < int(q); i++){
		int l, r;
		scanf("%d%d", &l, &r);
		--l, r -= m - 1;
		printf("%d\n", r >= l ? p[r] - p[l] : 0);
	}
	return 0;
}
