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

    int q, n;
    cin >> q;
    while(q--) {
        cin >> n;
        int temp = 0, ans = 1, prevFactor = sieve[n], currFactor;
        while(n > 1) {
            currFactor = sieve[n];
            if(currFactor != prevFactor) {
                ans *= temp + 1;
                temp = 0;
            }
            ++temp;

            if(currFactor == 0) break;
            n /= currFactor;
            prevFactor = currFactor;
        }
        cout << ans * (temp + 1) << "\n";
    }

}
