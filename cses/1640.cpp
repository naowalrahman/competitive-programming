#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int n, target; cin >> n >> target;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i+1;
    }
    sort(a.begin(), a.end());

    int left = 0, right = n-1;
    while(right > left) {
        int sum = a[left].first + a[right].first;
        if(sum == target) {
            cout << a[left].second << " " << a[right].second;
            return 0;
        }
        else if(sum > target) right--;
        else left++;
    }    

    cout << "IMPOSSIBLE";
    return 0;
}