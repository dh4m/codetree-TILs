#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, int> cnt_int;
    int n, k;
    cin >> n >> k;
    int res = 0;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        res += cnt_int[k - num];
        cnt_int[num]++;
    }
    cout << res << '\n';
    return 0;
}