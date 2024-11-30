#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cout << "Nhap so N: ";
    cin >> N;
    cout << "Uoc cua " << N << " la: ";
    for (int i = 1; i <= N / 2; i++)
    {
        if (N % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << N;
    return 0;
}