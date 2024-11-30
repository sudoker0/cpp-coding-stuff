#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("HELLO.DAT", "w", stdout);
    cout << "Hello\nHello\nHello";
    fclose(stdout);
    return 0;

    //! Cach 2
    // fstream my_file; // ? Tao fstream
    // my_file.open("HELLO.DAT", ios::out); // ? Mo file che do xuat (in: vao, out: xuat, app: gan vao cuoi)
    // if (!my_file) {
    //     return 1; // ? Ko the tao file
    // }
    // my_file << "HELLO\nHELLO\nHELLO"; // ? Chuyen noi dung vao my_file
    // my_file.close(); // ? Dong lai stream
    // return 0;
}