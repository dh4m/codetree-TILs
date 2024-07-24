#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> pos;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (pos.find(num) == pos.end())
            pos[num] = i + 1;
    }
    for (const auto &it: pos) {
        cout << it.first << " " << it.second << '\n';
    }
    return 0;
}