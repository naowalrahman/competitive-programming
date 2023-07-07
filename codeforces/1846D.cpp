#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int n, d, h; cin >> n >> d >> h;
        vector<int> y(n);
        for(auto&a:y) cin >> a;

        sort(y.begin(), y.end());
        double area = (double)n * d * h / 2.0;
        for(int i = 1; i < n; i++) {
            int overlap = y[i-1] + h - y[i];
            if(overlap > 0) {
                double base = (double)d / h * overlap;
                area -= base * overlap / 2;
            }
        }
        
        cout << setprecision(8) << area << "\n";
    }
    
    return 0;
}