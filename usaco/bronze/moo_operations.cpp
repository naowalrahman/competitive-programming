#include <bits/stdc++.h>
using namespace std;

int main() {
    int q; cin >> q;
    string s;
    while(q--) {
        cin >> s;
        int operations = s.size()-3;
        if(s.size() < 3) {
            cout << -1 << "\n";
            continue;
        }
        vector<int> operation_array;
        for(int i = 0; i < s.size() - 2; i++) {
            string L3 = s.substr(i, 3);
            if(L3 == "MOM" || L3 == "OOO")
                operation_array.push_back(operations+1);
            else if(L3 == "OOM")
                operation_array.push_back(operations+2);
            else if(L3 == "MOO")
                operation_array.push_back(operations);
        }
        if(operation_array.size() == 0) cout << -1;
        else cout << *min_element(operation_array.begin(), operation_array.end());
        cout << "\n";
    }
}