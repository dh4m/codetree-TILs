#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    unordered_set<int> s;

    cin >> n;
    while (n--) {
        int num;
        cin >> num;
        s.insert(num);
    }
    cin >> n;
    while (n--) {
        int num;
        cin >> num;
        if (s.find(num) != s.end()) {
            cout << "1\n";
        }
        else {
            cout << "0\n";
        }
    }
    return 0;

}