#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c; cin >> a >> b >> c;
    int d, e, f; cin >> d >> e >> f;
    int x; cin >> x;

    int t_x = x, a_x = x; 
    int ta = 0, ao = 0;

    while(t_x > 0) {
        if(t_x < a) {
            ta += b * t_x;
            t_x = 0;
        }
        else {
            ta += b * a;
            t_x -= a + c;
        }
    }

    while(a_x > 0) {
        if(a_x < d) {
            ao += e * a_x;
            a_x = 0;
        }
        else { 
            ao += e * d;
            a_x -= d + f;
        }
        
    }

    if(ta > ao) cout << "Takahashi";
    else if(ta == ao) cout << "Draw";
    else cout << "Aoki";

    return 0;
}