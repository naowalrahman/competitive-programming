/**
 * @author      : Naowal Rahman
 * @created     : 08/06/2022 11:15:32 AM
 * @filename    : 1714C
 */

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int s, maxn = 9; cin >> s;
        vi nums;
        
        while(s > 0) {
            if(s > maxn) {
                nums.push_back(maxn); 
                s -= maxn;
                maxn--;
            }
            else {
                nums.push_back(s); 
                s -= s;
            }
        } 

        for(int i = (int)nums.size() - 1; i >= 0; i--) {
            cout << nums[i];
        }
        cout << "\n";
    }

    return 0;
}
