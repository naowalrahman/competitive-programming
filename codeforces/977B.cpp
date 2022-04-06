#include <bits/stdc++.h>
using namespace std;

template<typename KeyType, typename ValueType>
std::pair<KeyType,ValueType> get_max( const std::map<KeyType,ValueType>& x ) {
    using pairtype=std::pair<KeyType,ValueType>; 
    return *std::max_element(x.begin(), x.end(), [] (const pairtype & p1, const pairtype & p2) {
        return p1.second < p2.second;
    });
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n; 
    string s; cin >> s;
    vector<string> v;

    for(int i = 0; i < n-1; i++) {
        string tg = "";
        tg.push_back(s[i]); tg.push_back(s[i+1]);
        v.push_back(tg);
    }
    map<string, int> counters;
    for(auto i : v) { 
        ++counters[i];
    }

    auto max = get_max(counters);
    cout << max.first;

    return 0;
}