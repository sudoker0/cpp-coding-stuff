#include <bits/stdc++.h>
using namespace std;

int str_to_num(string s) {
    int out = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
        out += (s[i] - 48) * pow(10, s.size() - i - 1);
    }
    return out;
}

int main() {
    bool prime[100001];
    memset(prime, true, sizeof(prime));
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i * i <= 100000; i++) {
        if (!prime[i]) continue;
        for (int j = i * 2; j <= 100000; j += i) prime[j] = false;
    }

    string s, ss;
    cin >> s;
    while (s != "0") {
        int largest = 0;
        int num_digit = 1;
        while (num_digit <= 5) {
            int cursor = num_digit;
            ss = "";
            for (int i = 0; i < num_digit; i++) ss += s[i];
            int num = str_to_num(ss);

            while (cursor < s.size()) {
                if (prime[num]) largest = max(largest, num);

                num %= (int)pow(10, num_digit - 1);
                num *= 10;
                num += (s[cursor] - 48);
                cursor++;
            }

            num_digit++;
        }

        cout << largest << "\n";
        cin >> s;
    }

    return 0;
}