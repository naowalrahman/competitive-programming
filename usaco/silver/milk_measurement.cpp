#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen("measurement.in", "r", stdin);  
    freopen("measurement.out", "w", stdout);  

    struct cow {
        int day, id, change;
        void read() {
            cin >> day >> id >> change;
        }
    };
    
    int n, g; cin >> n >> g;
    vector<cow> cows(n);
    for(auto&x:cows) x.read(); 

    sort(cows.begin(), cows.end(), [](const cow &a, const cow &b) -> bool {
        return a.day < b.day;
    });

    map<int, int, greater<int>> count;
    map<int, int> change;
    count[0] = n + 1;

    int ans = 0;
    for(cow& c : cows) {
        int& ref = change[c.id];
        
        bool was_top = ref == count.begin()->first;
        int prev_count = count[ref]--;
        if(prev_count == 1) count.erase(ref);
        
        ref += c.change;

        int curr_count = ++count[ref];
        bool is_top = ref == count.begin()->first;

        if(was_top) {
            if(!is_top || prev_count != 1 || curr_count != 1) ++ans;
        }
        else if(is_top) ++ans;
    }

    cout << ans;    
    return 0;
}