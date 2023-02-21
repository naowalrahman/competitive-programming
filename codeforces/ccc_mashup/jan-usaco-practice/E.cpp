// E - Encryption (easy)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p; cin >> n >> p;
    vector<int> a(n);
    for(auto&x:a) cin >> x;

    vector<int> prefixSums(n), suffixSums(n);
    prefixSums[0] = a[0] % p, suffixSums[n-1] = a[n-1] % p;
    for(int i = 1; i < n; i++) {
        prefixSums[i] = (prefixSums[i-1] + a[i]) % p; 
        suffixSums[n-1-i] = (suffixSums[n-i] + a[n-1-i]) % p;
    }

    int maxS = INT_MIN;
    for(int i = 1; i < n; i++)
        maxS = max(maxS, prefixSums[i-1] + suffixSums[i]);

    cout << maxS;
    
}