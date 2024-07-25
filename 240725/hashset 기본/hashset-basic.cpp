#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_set<int> hashset;
    for(int i = 0; i < n; i++) {
        string str;
        int arg;
        cin >> str >> arg;
        if (str == "add") {
            hashset.insert(arg);
        }
        else if (str == "remove") { 
            hashset.erase(arg);
        }
        else {
            if (hashset.find(arg) == hashset.end())
                cout << "false\n";
            else 
                cout << "true\n";
        }
    }
    return 0;
}