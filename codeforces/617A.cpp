#include <bits/stdc++.h>
using namespace std;

int main() { 
    int x; // int is coordinate of friend's house
    cin >> x; 
    vector<int> v = {1, 2, 3, 4, 5, 6}; 

    if(find(v.begin(), v.end(), x) != v.end())
        cout << 1; 
    else if(x % 5 == 0) cout << x / 5;
    else cout << x / 5 + 1;
}