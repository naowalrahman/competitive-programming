#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int f(ll n) {
    return n * (n + 1) / 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, a, b;
    cin >> n >> a >> b;
    cout << (n * (n + 1) / 2) -
    (a * (n / a) * (n / a + 1) / 2) -
    (b * (n / b) * (n / b + 1) / 2) +
    (lcm(a, b) * (n / lcm(a, b)) * (n / lcm(a, b) + 1) / 2);


    return 0;
}