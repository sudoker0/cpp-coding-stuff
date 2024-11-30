#include <bits/stdc++.h>
using namespace std;

// bool comp(char a, char b) {
//     return (a - '0') % 3 > (b - '0') % 3;
// }

// int main() {
//     string n;
//     cin >> n;

//     int sum = 0;
//     for (char c: n) {
//         sum += c - '0';
//     }

//     sort(n.begin(), n.end(), comp);

//     int d = sum % 3;
//     if (d == 0) {
//         cout << "0";
//         return 0;
//     }

//     int s = 0, cnt = 0;
//     for (char c: n) {
//         if (s == d) break;
//         if ((c - '0') % 3 == 0) continue;
//         if (s + (c - '0') % 3 > d) continue;
//         s += (c - '0') % 3;
//         cnt++;
//     }

//     cout << cnt;
//     return 0;
// }

int main() {
    string n;
    cin >> n;

    int sum = 0;
    for (char c: n) {
        sum += c - '0';
    }

    int d = sum % 3;
    if (d == 0) {
        cout << "0";
        return 0;
    }

    for (char c: n) {
        if ((c - '0') % 3 == d) {
            cout << "1";
            return 0;
        }
    }

    cout << "2";
    return 0;
}