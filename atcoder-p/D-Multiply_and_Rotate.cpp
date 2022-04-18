#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll a, N; cin >> a >> N;
    // have the max index be the largest
    // power of 10 less than N
    ll mi = 1; 
    while(mi <= N) mi *= 10; 
    // setup of tracker vector & queue
    vector<ll> tracker(mi, -1);
    tracker[1] = 0;
    queue<ll> qu; 
    qu.push(1);

    while(!qu.empty()) {
        ll curr = qu.front();
        qu.pop();
        ll ci = tracker[curr]; 

        ll o1 = a * curr; 
        if(o1 < mi && tracker[o1] == -1) {
            tracker[o1] = ci + 1;
            qu.push(o1);
        }
        if(curr % 10 != 0 && curr >= 10) {
            ll tmp = curr;
            ll digit = tmp % 10;
            tmp /= 10;
            ll o2 = stoi(to_string(digit) + to_string(tmp));
            if(o2 < mi && tracker[o2] == -1) {
                tracker[o2] = ci + 1;
                qu.push(o2);
            }
        }
    }        

    cout << tracker[N];

    return 0;
}