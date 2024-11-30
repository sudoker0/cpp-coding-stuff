#include <bits/stdc++.h>
using namespace std;

map<int, set<int>> g;

int dem = 0;
bool visited[200001];

void DFS(int u) {
    visited[u] = true;
    dem++;
    for (auto i: g[u]) {
        if (visited[i]) continue;
        DFS(i);
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    int u, v;
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        g[u].insert(v);
        g[v].insert(u);
    }

    memset(visited, false, sizeof(visited));

    //? dk1: Đồ thị phải có N đỉnh và M=N −1 cạnh.
    if (n - 1 != m) {
        cout << "No";
        return 0;
    }

    //? dk2: Đồ thị phải liên thông.
    DFS(u);
    if (dem != n) {
        cout << "No";
        return 0;
    }

    //? dk3: Chỉ có 2 đỉnh bậc 1 (ở hai đầu) và tất cả các đỉnh còn lại có bậc 2.
    int dem_1 = 0, dem_2 = 0, dem_khac = 0;
    for (auto i: g) {
        // i: pair<int, set<int>>
        if (i.second.size() == 1) dem_1++;
        else if (i.second.size() == 2) dem_2++;
        else { dem_khac++; }
    }

    if (dem_1 != 2 || dem_khac > 0) {
        cout << "No";
        return 0;
    }

    cout << "Yes";

    return 0;
}