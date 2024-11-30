#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> names;
    string name;
    for (int i = 0; i < n; i++) {
        cin >> name;
        if (names.find(name) == names.end()) {
            cout << name << "\n";
            names[name] = 1;
        } else {
            cout << name << names[name] << "\n";
            names[name]++;
        }
    }

    return 0;
}
