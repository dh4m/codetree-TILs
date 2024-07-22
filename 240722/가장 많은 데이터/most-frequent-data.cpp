#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> cnt_str;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        for (auto it: str) {
            if ('A' <= it && it <= 'Z') {
                it -= 'A' - 'a';
            }
        }
        cnt_str[str]++;
    }
    cout << max_element(cnt_str.begin(), cnt_str.end())->second;
    return 0;
}