#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	freopen("capso.inp", "r", stdin);
	freopen("capso.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	ll n, cnt = 0, tmp = 0;
	cin >> n;
	ll a[n + 1];
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	a[n] = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] == a[i + 1]) tmp++;
		else {
			cnt += tmp * (tmp + 1) / 2;
			tmp = 0;
		}
	}

	cout << cnt;

	return 0;
}
