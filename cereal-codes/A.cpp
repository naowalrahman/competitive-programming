#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int x; cin >> x;
    for(int y = 0; y <= 100; y++) {
        string squared = to_string((x+y)*(x+y));
        string cubed = to_string((x+y)*(x+y)*(x+y));
        string comb = squared + cubed;
        
        vector<int> nums(10);
        for(char c : comb) nums[c - '0'] = 1;
        
        int flag = true;
        for(int i : nums) {if(!i) flag = false;}
        if(flag) {
            cout << y;
            break;
        }
    }
    
    return 0;
}