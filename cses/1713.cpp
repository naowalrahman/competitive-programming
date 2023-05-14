#include <bits/stdc++.h>
using namespace std;

const int SIZE = 1000000;

int main() {
    vector<int> sieve(SIZE+1);
    for(int i = 2; i * i <= SIZE; i++) {
        if(!sieve[i]) {
            for(int j = i; j <= SIZE; j += i) sieve[j] = i;
        }
    }


    int q, n, primeFactors; cin >> q;
    while(q--) {
        primeFactors = 0;
        cin >> n;
        // for(int i = 0; i <= n; i++) cout << sieve[i] << ", ";
        // cout << "\n";
        int temp = 0;
        int ans = 1;
        int prevFactor = sieve[n];
        while(n > 1) {
            int currFactor = sieve[n];
            if(currFactor != prevFactor) {
                ans *= temp + 1;
                temp = 0;
            }
            ++temp;
            n /= currFactor;
            prevFactor = currFactor;
            // cout << sieve[n] << ", ";

        }
        cout << ans * (temp + 1) << "\n";
    }

}
