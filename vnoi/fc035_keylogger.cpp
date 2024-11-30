#include <bits/stdc++.h>
using namespace std;

struct character {
    char c;
    character* prev;
};

int main() {
    vector<character> out;
    string s;
    cin >> s;

    int cursor = 0;
    for (char c: s) {
        switch (c) {
            case '<':
                cursor = max(cursor - 1, 0);
                break;
            case '>':
                cursor = min(cursor + 1, (int)out.size());
                break;
            case '-':
                break;
            default:

                break;
        }
    }

    return 0;
}