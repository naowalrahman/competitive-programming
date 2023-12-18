#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	ifstream cin("lemonade.in");
	ofstream cout("lemonade.out");

	int n; cin >> n;
	vector<int> w(n);
	for(auto&x:w) cin >> x;

	sort(w.begin(), w.end(), greater<int>());
	int i = 0;
	while(i < n && i <= w[i]) ++i;
	cout << i;
}
