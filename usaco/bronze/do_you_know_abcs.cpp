#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> vals(7);
    for(int i = 0; i < 7; i++) cin >> vals[i];

    auto mx = max_element(vals.begin(), vals.end());
    int abc_sum = *mx;
    vals.erase(mx);
    auto a_it = min_element(vals.begin(), vals.end());
    int a = *a_it;
    vals.erase(a_it);
    int bc_sum = abc_sum - a;
    vector<int> two_sums(3);
    for(int i = 0; i < vals.size(); i++) {
        for(int j = i + 1; j < vals.size(); j++) {
            for(int k = j + 1; k < vals.size(); k++) {
                if(vals[i] + vals[j] + vals[k] == 2 * abc_sum) {
                    two_sums = { vals[i], vals[j], vals[k] };
                }
            }
        }
    }
    two_sums.erase(find(two_sums.begin(), two_sums.end(), bc_sum));
    int potential_b = two_sums[0] - a;
    int potential_c = two_sums[1] - a;
    cout << a << " " << min(potential_b, potential_c) << " " << max(potential_b, potential_c);

    return 0;
}