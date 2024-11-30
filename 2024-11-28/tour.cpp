#include <bits/stdc++.h>
using namespace std;

struct place {
    int x;
    int y;
    char c;
};

int main() {
    freopen("tour.inp", "r", stdin);
    freopen("tour.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int r, c;
    cin >> r >> c;

    string s;
    char tmp_c;
    vector<place> p;
    place begin;

    for (int i = 0; i < r; i++) {
        cin >> s;
        for (int j = 0; j < c; j++) {
            tmp_c = s[j];
            if (tmp_c == 'A') {
                begin.x = i;
                begin.y = j;
                begin.c = tmp_c;
            }
            else if (tmp_c != '.') {
                place tmp;
                tmp.x = i;
                tmp.y = j;
                tmp.c = tmp_c;
                p.push_back(tmp);
            }
        }
    }

    for (int i = 0; i < p.size(); i++) {
        
    }

    return 0;
}