#include <cmath>
#include <cstring>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    bool prime[N + 1];
    memset(prime, true, sizeof(N));
    for (int i = 2; i <= N; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                prime[j] = false;
            }
            cout << i << " ";
        }
    }
    return 0;
}
