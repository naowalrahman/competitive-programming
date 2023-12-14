#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()

int main() {
	ifstream cin("haybales.in");
	ofstream cout("haybales.out");

	int n, q; cin >> n >> q;
	vector<int> arr(n);
	for(auto&x:arr) cin >> x;

	sort(all(arr));

	int a, b;
	while(q--) {
		cin >> a >> b;
		auto itr_a = lower_bound(all(arr), a);
		auto itr_b = prev(upper_bound(all(arr), b));

		if(itr_a == arr.end() || itr_b == arr.end()) cout << 0 << "\n";
		else cout << itr_b - itr_a + 1<< "\n";
	}

	return 0;
}
