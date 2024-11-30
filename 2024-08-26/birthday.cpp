#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    int xi, ti;
    priority_queue<int> q;
    int t_sum = 0, cake = 0, out = 0;
    for (int i = 0; i < n; i++) {
        cin >> xi >> ti;
        q.push(ti);
        t_sum += ti;
        cake++;

        while (t_sum + xi > t && !(q.empty())) {
            t_sum -= q.top();
            cake--;
            q.pop();
        }

        out = max(out, cake);
    }

    cout << out;
    return 0;
}