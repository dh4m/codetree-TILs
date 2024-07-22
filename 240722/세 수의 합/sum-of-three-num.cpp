#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    unordered_map<int, int> cnt_int;
    unordered_map<int, int> cnt_sum;
    int num;
    int res = 0;
    cin >> num;
    cnt_int[num]++;
    for (int i = 1; i < n; i++) {
        cin >> num;
        for (auto it: cnt_int) {
            cnt_sum[num + it.second] += cnt_int[it.second];
        }
        res += cnt_sum[k - num];
        cnt_int[num]++;
    }
    cout << res << '\n';
    return 0;
}