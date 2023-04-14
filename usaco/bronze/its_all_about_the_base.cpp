#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("whatbase.in");
    ofstream cout("whatbase.out");

    auto toBase10 = [](vector<int>& x, int b) {
        return x[0] + x[1] * b + x[2] * b * b;
    };
    
    int k, nx, ny; cin >> k;
    while(k--) {
        cin >> nx >> ny;
        vector<int> xd = {nx%10, (nx/10)%10, (nx/100)%10};
        vector<int> yd = {ny%10, (ny/10)%10, (ny/100)%10};

        int xb = 10, yb = 10;
        while(xb < 15000 && yb < 15000) {
            int xe = toBase10(xd, xb), ye = toBase10(yd, yb);
            if(xe == ye) {
                cout << xb << " " << yb << "\n";
                break;
            }
            else if(xe < ye) ++xb;
            else ++yb;
        }
    }

    return 0;
}