#include <iostream>
#include <string>
using namespace std;

int main() {
    int cnt[26] = { 0 };
    string str;
    cin >> str;
    for (auto &it: str) {
        cnt[it - 'a']++;
    }
    int is_result = false;
    for (auto &it: str) {
        if (cnt[it - 'a'] == 1) {
            cout << it;
            is_result = true;
            break ;
        }
    }
    if (!is_result)
        cout << "None";
    return 0;
}