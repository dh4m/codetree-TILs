#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, k;
    cin >> n >> k;
    unordered_map<int, int> cnt_int;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        cnt_int[num]++;
    }

    vector<pair<int, int> > v(cnt_int.begin(), cnt_int.end());
    sort(v.begin(), v.end(), 
        [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second != b.second ? a.second > b.second : a.first > b.first;
        }
    );
    for(int i = 0; i < k; i++) {
        cout << v[i].first << ' ';
    }
    return 0;
}