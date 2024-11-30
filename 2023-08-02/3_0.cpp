#include <bits/stdc++.h>
using namespace std;

int main() {
    float a, b;
    cin >> a >> b;

    if (a == 0 and b == 0) {
        cout << "vo so nghiem";
        return 0;
    }

    if (a == 0) {
        cout << "vo nghiem";
        return 0;
    }

    cout << fixed << setprecision(2);
    
    float out = -b / a;
    if (out == 0) cout << 0;
    else cout << out;

    return 0;
}