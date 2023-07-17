#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    ifstream cin("convention2.in");
    ofstream cout("convention2.out");
    
    struct cow {
        int arrival;
        int time;
        int index;
    };

    int n; cin >> n;
    vector<cow> c(n), cs(n);
    for(int i = 0; i < n; i++) {
        cin >> c[i].arrival >> c[i].time;
        c[i].index = i;
    }
    
    partial_sort_copy(all(c), all(cs), [](cow &a, cow &b) -> bool {
        return a.arrival < b.arrival;
    });

    set<int> waiting;
    int t = 0, i = 0, max_wait = INT_MIN;
    cow curr_cow;
    while(i < n) {
        if(waiting.empty()) {
            curr_cow = cs[i++];
            t = curr_cow.arrival;
        }
        else {
            auto it = waiting.begin();
            curr_cow = c[*it];
            waiting.erase(it);
        }
        
        max_wait = max(max_wait, t - curr_cow.arrival); 
        t += curr_cow.time;
        
        while(i < n && cs[i].arrival <= t) {
            waiting.insert(cs[i++].index);
        }
    }

    cout << max_wait;
    
    return 0;
}