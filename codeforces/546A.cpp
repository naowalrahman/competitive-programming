#include <bits/stdc++.h>
using namespace std;

int main() { 
    int k, n, w;
    cin >> k >> n >> w; 
    // k + 2k + 3k + ... = k(1 + 2 + 3 + ...) 
    // so, total = k * (w * (w + 1) / 2)
    // thus answer = total - n

    int total = k * (w * (w + 1) / 2);
    int answer = total - n;

    if(answer >= 0) cout << answer;
    else cout << "0";


    return 0;
}