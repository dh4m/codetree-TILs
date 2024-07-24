#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    unordered_map<int, int> seq[4];
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        seq[0][num]++;
    }
    for (int s = 1; s < 4; s++) {
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            for (auto it: seq[s - 1]) {
                seq[s][num + it.first] += it.second;
            }
        }
    }
    cout << seq[3][0];
    return 0;
}