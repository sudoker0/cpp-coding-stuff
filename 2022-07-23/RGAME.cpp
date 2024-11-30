#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, dai_nhat = 0, dai_thu_hai = 0;
    freopen("RGAME.INP", "r", stdin);
    freopen("RGAME.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    int canh[n];
    for (int i = 0; i < n; i++) cin >> canh[i];
    sort(canh, canh + n);

    for (int i = 0; i < n - 1; i++)
    {
        if (canh[i] == canh[i + 1])
        {
            dai_thu_hai = dai_nhat;
            dai_nhat = canh[i];
            i++;
        }
    }
    if (dai_nhat * dai_thu_hai == 0) cout << -1;
    else cout << dai_nhat * dai_thu_hai;
    return 0;
}