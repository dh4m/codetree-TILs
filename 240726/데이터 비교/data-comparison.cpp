#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
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