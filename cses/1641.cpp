#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int n, target; cin >> n >> target;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i].f;
        a[i].s = i+1;
    }
    sort(a.begin(), a.end());

    for(int i = 0; i < n; i++) {
        int ct = target - a[i].f, left = 0, right = n-1;
        while(right > left) {
            if(left == i) {
                left++;
                continue;
            }
            else if(right == i) {
                right--;
                continue;
            }

            int cs = a[left].f + a[right].f;
            if(cs == ct) {
                cout << a[i].s << " " << a[left].s << " " << a[right].s;
                return 0;
            }
            else if(cs > ct) right--;
            else left++;
        }
    }
    
    cout << "IMPOSSIBLE";
    return 0;
}