#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    unordered_set<int> s;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        s.insert(num);
    } 
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (s.find(num) != s.end()) {
            cout << "1 ";
        }
        else {
            cout << "0 ";
        }
    }
    return 0;
}