#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long number)
{
    for (int i = 2; i * i <= number; i++)
        if (number % i == 0) return false;
    return true;
}

int main()
{
    freopen("FIBONT.INP", "r", stdin);
    freopen("FIBONT.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long N, cnt = 2;
    long long fi[10000];
    cin >> N;

    fi[0] = 1;
    fi[1] = 1;
    fi[cnt] = fi[cnt - 1] + fi[cnt - 2];
    cout << fi[cnt] << "\n";

    while (fi[cnt] <= N)
    {
        cnt++;
        fi[cnt] = fi[cnt - 1] + fi[cnt - 2];
        if (fi[cnt] > N) break;
        if (isPrime(fi[cnt]))
            cout << fi[cnt] << "\n";
    }

    return 0;
}