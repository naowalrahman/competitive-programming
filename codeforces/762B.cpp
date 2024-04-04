/**
 * @file 762B.cpp
 * @author Naowal Rahman
 * @date 2024-02-25 13:53
 */
#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int)(x.size())

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int u, p, b; cin >> u >> p >> b;
    int n; cin >> n;
    vector<int> usb, ps2;
    for(int i = 0; i < n; i++) {
        int c;
        string type;
        cin >> c >> type;
        if(type == "USB") usb.push_back(c);
        else ps2.push_back(c);
    }

    sort(usb.begin(), usb.end());
    sort(ps2.begin(), ps2.end());

    long long cost = 0;
    int i = 0, j = 0;
    while(i < u && i < sz(usb)) cost += usb[i++];
    while(j < p && j < sz(ps2)) cost += ps2[j++];

    int comps = i + j;
    vector<int> both;
    while(i < sz(usb) && j < sz(ps2)) {
        if(usb[i] < ps2[j]) both.push_back(usb[i++]);
        else both.push_back(ps2[j++]);
    }
    while(i < sz(usb)) both.push_back(usb[i++]);
    while(j < sz(ps2)) both.push_back(ps2[j++]);

    int k = 0;
    while(k < b && k < sz(both)) cost += both[k++];
    comps += k;

    cout << comps << " " << cost;

    return 0;
}
