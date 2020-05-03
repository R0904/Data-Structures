#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

const int N = 100 * 1000 + 13;

int n, r;
int a[N];

void solve() {
	scanf("%d%d", &n, &r);
	forn(i, n) scanf("%d", &a[i]);

	sort(a, a + n);
	n = unique(a, a + n) - a;

	int ans = 0;
	for (int i = n - 1; i >= 0; i--)
		ans += (a[i] - ans * r > 0);

	printf("%d\n", ans);
}

int main() {
	int q;
	scanf("%d", &q);
	forn(i, q) solve();
}
