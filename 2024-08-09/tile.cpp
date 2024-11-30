#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("tile.inp", "r", stdin);
	freopen("tile.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, cnt = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		if (a[i] >= cnt) cnt++;
	}
	
	cout << cnt;
	return 0;
}
