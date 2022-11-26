#include <bits/stdc++.h>
using namespace std;

int main() {
	ifstream cin("pails.in");
	ofstream cout("pails.out");
	
	int x, y, m, ans = 0, curr; cin >> x >> y >> m;
	for(int nx = 0; nx * x <= m; nx++) {
		for(int ny = 0; ny * y <= m; ny++) {
			curr = nx * x + ny * y;
			if(curr <= m) ans = max(ans, curr);
		}
	}
	
	cout << ans;
	return 0;
}