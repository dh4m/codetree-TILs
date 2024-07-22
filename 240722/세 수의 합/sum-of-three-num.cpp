#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k;
    cin >> n >> k;
    unordered_map<int, int> cnt_int;
    int arr[1000];
    int num;
    int res = 0;
    for (int i = 0; i < n; i++) {
        cin >> num;
        arr[i] = num;
        cnt_int[num]++;
    }

    for (int i = 0; i < n; i++) {
        cnt_int[arr[i]]--;
        for (int j = 0; j < i; j++) {
            res += cnt_int[k - arr[i] - arr[j]];
        }
    }
    cout << res << '\n';
    return 0;
}