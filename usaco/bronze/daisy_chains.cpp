#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int ans = 0;
    int n; cin >> n;
    vector<int> p(n + 1);
    for(int i = 1; i < n + 1; i++) cin >> p[i];

    for(int i = 1; i < n + 1; i++) {
        for(int j = i; j < n + 1; j++) {
            int sum = accumulate(p.begin() + i, p.begin() + j + 1, 0);
            double total_nums = j - i + 1;
            double curr_avg = sum / total_nums;
            for(int k = i; k <= j; k++) {
                if(abs(p[k] - curr_avg) < 1e-10) {
                    ans++;
                    break;
                }

            }
        }
    }

    cout << ans;

    return 0;
}