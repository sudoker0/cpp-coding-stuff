#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("TONGCAPSO.INP", "r", stdin);
    freopen("TONGCAPSO.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, len, sum_digit, digit, extra = 0;
    char c_digit;
    cin >> N;
    string A, B, result = "";
    for (int i = 0; i < N; i++)
    {
        result = "";
        cin >> A >> B;
        if (B.size() < A.size()) swap(A, B);
        len = B.size() - A.size();

        B = '0' + B;
        for (int l = 0; l <= len; l++) A = '0' + A;

        for (int j = A.size() - 1; j >= 0; j--)
        {
            sum_digit = (A[j] - '0') + (B[j] - '0') + extra;
            digit = sum_digit % 10;
            extra = (sum_digit - digit) / 10;
            c_digit = digit + '0';
            result = c_digit + result;
        }

        result.erase(0, 1);

        if ((result[result.size() - 1] - '0') % 2 == 0) cout << result << '\n';
    }
    return 0;
}