#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int n; cin >> n;
	vector<int> arr(n);
	for(auto&x:arr) cin >> x;

	sort(arr.begin(), arr.end());

	int cost = 0;
	for(int i : arr) cost += abs(arr[n/2] - i);

	cout << cost;
}
