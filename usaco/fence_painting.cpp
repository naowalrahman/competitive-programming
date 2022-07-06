#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ifstream cin("paint.in");
    ofstream cout("paint.out");

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if((d > b && c > b) || (d < a && c < a)) 
        cout << b - a + d - c; 
    
    else 
        cout << max({a, b, c, d}) - min({a, b, c, d});


    return 0;
}