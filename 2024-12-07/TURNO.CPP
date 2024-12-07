#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    freopen("TURNO.INP", "r", stdin);
    freopen("TURNO.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    ll a;
    ll out = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a <= 5) out += 0;
        else if (a <= 10) out += 300000 * 0.2;
        else if (a <= 15) out += 300000 * 0.5;
        else if (a <= 59) out += 300000;
        else out += 300000 * 0.8;
    }

    cout << out;

    return 0;
}
