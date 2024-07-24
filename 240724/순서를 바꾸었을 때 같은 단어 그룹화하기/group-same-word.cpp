#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    unordered_map<string, int> grp_cnt;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        sort(str.begin(), str.end());
        grp_cnt[str]++;
    }
    cout << max_element(grp_cnt.begin(), grp_cnt.end(), 
        [](const pair<string, int>&a, const pair<string, int>&b){
            return a.second < b.second;
        }
    )->second;
    return 0;
}