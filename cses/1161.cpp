/**
 * @file 1161.cpp
 * @author Naowal Rahman
 * @date 2024-02-25 16:54
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int x, n, d; cin >> x >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    while(cin >> d) pq.push(d);

    long long cost = 0;
    while(pq.size() > 1) {
        int f = pq.top(); pq.pop();
        int s = pq.top(); pq.pop();
        cost += f + s;
        pq.push(f + s);
    }

    cout << cost;

    return 0;
}
