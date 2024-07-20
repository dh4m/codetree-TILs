#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<int, int> m;
    string cmd;
    int n;
    cin >> n;
    while (n--) {
        int arg1, arg2;
        cin >> cmd;
        if (cmd == "add") {
            cin >> arg1 >> arg2;
            if (m.find(arg1) != m.end())
                m.erase(arg1);
            m.insert(make_pair(arg1, arg2));
        } 
        else if (cmd == "find") {
            cin >> arg1;
            if (m.find(arg1) != m.end()) {
                cout << m.find(arg1)->second << '\n';
            }
            else cout << "None\n";
        }
        else {
            cin >> arg1;
            m.erase(arg1);
        }
    }
    return 0;
}