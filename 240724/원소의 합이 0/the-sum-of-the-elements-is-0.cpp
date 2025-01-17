#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    unordered_map<int, int> seq[4];
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        seq[0][num] ++;
    }
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        for (const auto &it: seq[0]) {
            seq[1][num + it.first] += it.second;
        }
    }
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        seq[2][num] ++;
    }
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        for (const auto &it: seq[2]) {
            seq[3][num + it.first] += it.second;
        }
    }
    int res = 0;
    for (const auto &it: seq[1]) {
        if (seq[3].find(-it.first) != seq[3].end())
            res += seq[3][-it.first] * it.second;
    }
    cout << res;
    return 0;
}