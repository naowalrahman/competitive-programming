#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    ifstream cin("cardgame.in");
    ofstream cout("cardgame.out");

    int n; cin >> n;
    vector<int> b(n); for(auto&x:b) cin >> x;
    sort(b.begin(), b.begin() + n / 2, greater<int>());
    sort(b.begin() + n / 2, b.end());
        
    set<int> other;
    for(int i = 1; i <= 2*n; i++) other.insert(i);
    for(int i : b) other.erase(i);
        
    int ans = 0;
    for(int i = 0; i < n/2; i++) {
        auto last = prev(other.end());
        if(*last > b[i]) {
            ++ans;
            other.erase(last);
        }   
    }   
    for(int i = n/2; i < n; i++) {
        auto first = other.begin();
        if(*first < b[i]) {
            ++ans;
            other.erase(first);
        }   
    }   
        
    cout << ans;
}
