#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("cowsignal.in");
    ofstream cout("cowsignal.out");

    int m, n, k; cin >> m >> n >> k;
    vector<string> signal(m), amplified;
    for(auto&x:signal) cin >> x;

    string accum;
    for(string line : signal) {
        accum = "";
        for(int i = 0; i < n; i++)
            for(int j = 0; j < k; j++)
                accum += line[i];
        for(int i = 0; i < k; i++)
            amplified.push_back(accum);
    } 

    for(string line : amplified)
        cout << line << "\n";
}