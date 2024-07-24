#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    map<int, int> m;
    int n;
    cin >> n;
    while (n--) {
        string cmd;
        int k, v;
        cin >> cmd;
        if (cmd == "add") {
            cin >> k >> v;
            m[k] = v;
        }
        else if (cmd == "remove") {
            cin >> k;
            m.erase(k);
        }
        else if (cmd == "find") {
            cin >> k;
            if (m.find(k) == m.end())
                cout << "None\n";
            else
                cout << m.find(k)->second << '\n';
        }
        else if (cmd == "print_list") {
            if (m.empty())
                cout << "None\n";
            for (const auto &it: m) {
                cout << it.second << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}