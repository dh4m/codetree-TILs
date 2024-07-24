#include <iostream>
#include <string>
using namespace std;

int main() {
    int cnt[26];
    string str;
    cin >> str;
    for (auto &it: str) {
        cnt[it - 'a']++;
    }
    for (auto &it: str) {
        if (cnt[it - 'a'] == 1) {
            cout << it;
            break ;
        }
    }
    return 0;
}