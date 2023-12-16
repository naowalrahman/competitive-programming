/**
 * @author      : Naowal Rahman
 * @created     : 07/09/2023 09:14:25 PM
 * @filename    : 702C
 */

#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    int n, m; cin >> n >> m;
    vector<int> cities(n), towers(m);
    for(auto&x:cities) cin >> x;
    for(auto&x:towers) cin >> x;

    sort(all(cities));
    sort(all(towers));

    int curr_tower = 0, prev_tower = 0;
    vector<int> dist(m);
    for(int i = 0; i < n; i++) {
        while(cities[i] > towers[curr_tower]) {
            prev_tower = curr_tower++;
            if(curr_tower == m) {
                curr_tower = m-1;
                break;
            }
        }
        
        int dtop = abs(cities[i] - towers[prev_tower]);
        int dtoc = abs(towers[curr_tower] - cities[i]);
        if(dtop < dtoc) dist[prev_tower] = max(dist[prev_tower], dtop);
        else dist[curr_tower] = max(dist[curr_tower], dtoc);
    }

    cout << *max_element(all(dist)) << "\n";

    return 0;
}

