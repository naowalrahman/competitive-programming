#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int curr; cin >> curr; 
    int num_alive = 0;
    for(int i = 0; i < 8; i++) {
        int x; cin >> x; 
        if(x == 1) {
            num_alive++;
        }
    }

    if(curr == 1) {
        if(num_alive == 2 || num_alive == 3) cout << 1;
        else cout << 0;
    }
    else if(curr == 0 && num_alive == 3) cout << 1;
    else cout << 0;
    return 0;
    
}