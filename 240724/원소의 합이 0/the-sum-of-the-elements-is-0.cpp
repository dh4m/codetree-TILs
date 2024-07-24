#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    unordered_map<int, int> seq[2];
    int write_map = 0;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        seq[0][num]++;
    }
    write_map = 1;
    for (int s = 1; s < 4; s++) {
        seq[write_map].clear();
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            for (auto it: seq[!write_map]) {
                seq[write_map][num + it.first] += it.second;
            }
        }
        write_map = !write_map;
    }
    cout << seq[!write_map][0];
    return 0;
}