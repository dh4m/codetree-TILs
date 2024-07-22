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
        for (int i = 0; i < str.length(); i++) {
            if ('A' <= str[i] && str[i] <= 'Z') {
                str[i] -= 'A' - 'a';
            }
        }
        cnt_str[str]++;
    }
    cout << max_element(cnt_str.begin(), cnt_str.end(), 
            [](const pair<string, int>& a, const pair<string, int>& b) {
                return a.second < b.second;
            })->second;
    return 0;
}