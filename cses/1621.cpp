#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, tmp;
    cin >> n;
    set<int> a;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.insert(tmp);
    }

    cout << a.size();

    return 0;
}