#include <bits/stdc++.h>
using namespace std;

bool a[1001][1001];
int n, m;

struct point {
    int x;
    int y;
};

point start_p, end_p;

point parent[1001][1001];
vector<point> q;

std::string path = "";
int len_path = 0;

int main() {
    // freopen("rooms.inp", "r", stdin);
    // freopen("rooms.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    std::string s;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = false;
        }
    }

    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < m; j++) {
            if (s[j] == '.') a[i][j] = true;
            if (s[j] == 'A') {
                a[i][j] = true;
                start_p.x = i;
                start_p.y = j;
            }
            if (s[j] == 'B') {
                a[i][j] = true;
                end_p.x = i;
                end_p.y = j;
            }
        }
    }

    q.push_back(start_p);
    int direction[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    while (!q.empty()) {
        point p = q.back();
        q.pop_back();

        if (p.x == end_p.x && p.y == end_p.y) goto traverse;
        a[p.x][p.y] = false;

        for (int i = 0; i < 4; i++) {
            point np;
            np.x = p.x + direction[i][0];
            np.y = p.y + direction[i][1];

            if (np.x < 0 || np.y < 0 || np.x >= n || np.y >= m) continue;
            if (!a[np.x][np.y]) continue;

            q.push_back(np);
            parent[np.x][np.y] = p;
        }
    }

    len_path = INT_MAX;

    traverse:
    if (len_path == INT_MAX) {
        cout << "NO";
        return 0;
    }

    point p = end_p;
    point pp;

    while (p.x != start_p.x || p.y != start_p.y) {
        pp = parent[p.x][p.y];
        if (p.x - pp.x == 1) path += "D";
        if (p.x - pp.x == -1) path += "U";
        if (p.y - pp.y == 1) path += "R";
        if (p.y - pp.y == -1) path += "L";
        p = pp;
        len_path++;
    }

    reverse(path.begin(), path.end());
    cout << "YES\n";
    cout << path.size() << "\n";
    cout << path << "\n";

    return 0;
}