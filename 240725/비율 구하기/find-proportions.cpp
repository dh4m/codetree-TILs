#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    map<string, int> word_cnt;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        word_cnt[str]++;
    }
    cout << fixed;
    cout.precision(4);
    for (const auto &it: word_cnt) {
        cout << it.first << " " << (it.second / (double)n) * 100 << '\n';
    }
    return 0;
}