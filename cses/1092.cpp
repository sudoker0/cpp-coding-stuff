#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 4 == 0) {
        cout << "YES\n";
        cout << n / 2 << "\n";
        int cnt = 0, a = 0;
        while (cnt < n / 2) {
            a++;
            cout << a << " ";
            a += 3;
            cout << a << " ";
            cnt += 2;
        }

        cout << "\n";
        cout << n / 2 << "\n";
        cnt = 0, a = -1;
        while (cnt < n / 2) {
            a += 3;
            cout << a << " ";
            a++;
            cout << a << " ";
            cnt += 2;
        }

    } else if ((n + 1) % 4 == 0) {
        cout << "YES\n";
        cout << (n + 1) / 2 << "\n";
        cout << 1 << " " << 2 << " ";
        int cnt = 2, a = 2;
        while (cnt < (n + 1) / 2) {
            a += 3;
            cout << a << " ";
            a++;
            cout << a << " ";
            cnt += 2;
        }

        cout << "\n";
        cout << n / 2 << "\n";
        cout << 3 << " ";
        cnt = 1, a = 3;
        while (cnt < n / 2) {
            a++;
            cout << a << " ";
            a += 3;
            cout << a << " ";
            cnt += 2;
        }
    } else {
        cout << "NO";
    }

    return 0;
}