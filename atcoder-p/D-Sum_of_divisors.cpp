#include <bits/stdc++.h>
using namespace std;
typedef long long int;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    int total_sum = 0;
    for(int i = 1; i <= N; i++) {
        int divisors = 0;
        for(int j = 1; j <= sqrt(i); j++) {
            if(i % j == 0) {
                if(i / j == j) divisors++;
                else divisors += 2;
            }
        }
        total_sum += divisors * i;
    }

    cout << total_sum;

    return 0;
}