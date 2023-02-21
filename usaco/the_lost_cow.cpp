#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("lostcow.in");
    ofstream cout("lostcow.out");

    int x, y; cin >> x >> y;
    int step = 1, pos = x, dist = 0; // do *= -2
    bool flag = false;
    while(true) {
        if(step > 0) {
            while(pos++ < x + step) {
                dist++;
                if(pos == y) {
                    flag = true;
                    break;   
                }
            }
            pos--;
        }
        else {
            while(pos-- > x + step) {
                dist++;
                if(pos == y) {
                    flag = true;
                    break;
                }
            }
            pos++;
        }
        if(flag) break;
        step *= -2;
    }

    cout << dist;

}
