#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	freopen("vatsua.inp", "r", stdin);
	freopen("vatsua.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, p = 0;
	ll out = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n, greater<int>());

	for (int i = 0; i < n; i++) {
		out += max(a[i] - p, 0);
		p++;
	}

	cout << out;
	return 0;
}
