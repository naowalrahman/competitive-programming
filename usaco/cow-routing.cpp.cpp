#include <bits/stdc++.h>
using namespace std;

int main() {
	ifstream cin("cowroute.in");
	ofstream cout("cowroute.out");

	int a, b, n; cin >> a >> b >> n;
	vector<int> costs(n);
	vector<vector<int>> routes(n);

	int x, c;
	for(int i = 0; i < n; i++) {
		cin >> costs[i] >> c;
		for(int j = 0; j < c; j++) {
			cin >> x;
			routes[i].push_back(x);
		}		
	}

	int min_cost = INT_MAX;
	bool found_a = false, found_b = false;
	for(int s = 0; s < n; s++) {
		auto v = routes[s];
		for(int i = 0; i < v.size(); i++) {
			if(!found_a && v[i] == a) found_a = true;	
			else if(found_a && v[i] == b) found_b = true;
		}
		if(found_a && found_b) min_cost = min(min_cost, costs[s]);
		found_a = false, found_b = false;
	}

	cout << (min_cost == INT_MAX ? -1 : min_cost) << "\n";	
}