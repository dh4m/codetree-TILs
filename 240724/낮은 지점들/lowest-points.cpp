#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    unordered_map<int, int> y_map;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if (!y_map[x] || y_map[x] > y)
            y_map[x] = y;
    }
    int sum = 0;
    for (const auto &it: y_map) {
        sum += it.second;
    }
    cout << sum;
    return 0;
}