#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    map<char, int> character;
    for (char c: s) {
        character[c]++;
    }

    int cnt_odd = 0;
    for (auto i: character) {
        if (i.second % 2 != 0) cnt_odd++;
    }

    if (cnt_odd > 1) cout << "NO SOLUTION";
    else {
        string first_half = "", second_half = "", middle = "";

        for (auto i: character) {
            if (i.second % 2 != 0) {
                for (int j = 0; j < i.second; j++) middle += i.first;
            } else {
                for (int j = 0; j < i.second; j += 2) {
                    first_half += i.first;
                    second_half += i.first;
                }
            }
        }

        reverse(second_half.begin(), second_half.end());

        cout << first_half << middle << second_half;
    }

    return 0;
}