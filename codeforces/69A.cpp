#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> x, y, z; 
    for(int i = 0; i < n; i++) {
        int tempx, tempy, tempz;
        cin >> tempx >> tempy >> tempz;
        x.push_back(tempx);
        y.push_back(tempy);
        z.push_back(tempz);
    }
    int xsum = accumulate(x.begin(), x.end(), 0);
    int ysum = accumulate(y.begin(), y.end(), 0);
    int zsum = accumulate(z.begin(), z.end(), 0);

    if(xsum == 0 && ysum == 0 && zsum == 0) cout << "YES"; 
    else cout << "NO";
    return 0;
}