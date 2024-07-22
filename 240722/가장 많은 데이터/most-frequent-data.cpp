#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;

    unordered_map<string, int> cnt_str;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        cnt_str[str]++;
        if (cnt_str[str] > ans)
            ans = cnt_str[str];
    }
    cout << ans << '\n';
    return 0;
}