#include <bits/stdc++.h> 
using namespace std;

int main() {
    int t; cin >> t; 
    
    while(t--) {
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        bool not_sorted = false;
        for(int i = 0; i < n-1; i++)
            if(v[i] > v[i+1]) not_sorted = true;
        
        if(not_sorted) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}