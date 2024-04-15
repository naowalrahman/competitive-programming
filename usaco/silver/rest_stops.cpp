#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	ifstream cin("reststops.in");
	ofstream cout("reststops.out");
	cin.tie(0)->sync_with_stdio(0);

	int L, n, rf, rb;
	cin >> L >> n >> rf >> rb;
	vector<pair<int, int>> xc(n);
	for(auto &p : xc) cin >> p.first >> p.second;

	vector<int> suffix(n + 1);
	int cur_max = 0;
	for(int i = n-1; i >= 0; --i) {
		if(xc[i].second > cur_max) {
			cur_max = xc[i].second;
			suffix[i] = i;
		}
		else suffix[i] = suffix[i+1];
	}

	int ans = 0, pos = 0, prev_x = 0;
	while(pos < n) {
		auto y = xc[suffix[pos]];
		ans += (y.first - prev_x) * (rf - rb) * y.second;
		prev_x = y.first;
		pos = suffix[pos]+1;
	}

	cout << ans;
}
