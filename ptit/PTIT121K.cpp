#include <bits/stdc++.h>
using namespace std;
int n;
int a[100][100];
string dp[101][101];

char num_to_hex(int n) {
    map<int, char> h;
    h[10] = 'A';
    h[11] = 'B';
    h[12] = 'C';
    h[13] = 'D';
    h[14] = 'E';
    h[15] = 'F';
    if (n >= 0 && n <= 9) return (char)(n + 48);
    else return h[n];
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> a[i][j];

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= n; j++) dp[i][j] = (char)'\000';

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            if (i == 1 && j == 1) dp[1][1] = (char)a[0][0];
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + (char)a[i - 1][j - 1];
        }

    string output = dp[n][n];
    output.reserve();
    output.append('\000', 4 - output.size() % 4);

    vector<char> c_output;
    for (int i = output.size() - 1; i >= 0; i -= 4) {
        int f = output[i] * 1 + output[i - 1] * 2 + output[i - 2] * 4 + output[i - 3] * 8;
        c_output.push_back(num_to_hex(f));
    }

    while (c_output.back() == '0') {
        c_output.pop_back();
    }

    if (c_output.size() == 0) {
        cout << "0";
        return 0;
    }

    reverse(c_output.begin(), c_output.end());
    for (auto i: c_output) {
        cout << i;
    }

    return 0;
}