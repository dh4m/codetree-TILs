#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> str_int_map;
    unordered_map<int, string> int_str_map;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        str_int_map[str] = i + 1;
        int_str_map[i + 1] = str;
    }
    for (int i = 0; i < m; i++) {
        string str;
        cin >> str;
        bool isnum = true;
        for (char c: str) {
            if ('0' > c || c > '9')
                isnum = false;
        }
        if (isnum)
            cout << int_str_map[stoi(str)] << '\n';
        else
            cout << str_int_map[str] << '\n';
    }
    return 0;
}