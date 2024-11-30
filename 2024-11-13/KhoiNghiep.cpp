#include <bits/stdc++.h>
using namespace std;

struct company {
    int a;
    int b;
};

bool comp(company x, company y) {
    if (x.a == y.a) return x.b < y.b;
    return x.a < y.a;
}

int n;
company a[200001];

void sub1() {
    cout << 0;
}

void sub2() {
    sort(a, a + n, comp);
    int money = 0;
    for (int i = 0; i < a[0].a; i++) {
        money += a[i].b;
    }
    cout << money;
}

void sub3() {
    sort(a, a + n, comp);
    int cur = 0;
    int cnt = 0;
    int money = 0;
    for (int i = 0; i < n - cur; i++) {
        if (cnt < a[i].a) {
            money += a[i].b;
            cur++;
            i--;
        }
        cnt++;
    }
    cout << money;
}

int main() {
    freopen("KhoiNghiep.inp", "r", stdin);
    freopen("KhoiNghiep.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i].a >> a[i].b;

    bool isSub2 = true, isSub3 = true;
    for (int i = 1; i < n; i++) {
        if (a[0].a != a[i].a) isSub2 = false;
        if (a[0].b != a[i].b) isSub3 = false;
    }

    if (isSub2) sub2();
    else if (isSub3) sub3();
    else if (n <= 20) sub1();

    return 0;
}