#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    unordered_map<int, int> cnt_int;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        cnt_int[num]++;
    }
    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        cout << cnt_int[num];
        cout << (i != m - 1 ? ' ' : '\n');
    }
    return 0;
}