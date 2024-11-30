#include <bits/stdc++.h>
using namespace std;

int ston(string S)
{
    int num = 0;
    for (int i = 0; i < S.size(); i++)
    {
        num = num * 10 + (S[i] - '0');
    }
    return num;
}

int main()
{
    freopen("THONGKE.INP", "r", stdin);
    freopen("THONGKE.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, hcases = 0;
    vector<int> buff;
    string S;
    cin >> N;
    cin.ignore(32000, '\n');
    for (int i = 0; i < N; i++)
    {
        getline(cin, S);
        stringstream SS(S);

        string cases;
        int total = 0;
        while(getline(SS, cases, '-'))
        {
            cases.erase(cases.size() - 2, 2);
            int num = ston(cases);
            total += num;
        }

        if (hcases < total) hcases = total;
        buff.push_back(total);
    }
    cout << hcases << "\n";
    for (int i = 0; i < buff.size(); i++) cout << buff[i] << "\n";

    return 0;
}
