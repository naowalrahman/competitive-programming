#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("rental.in");
    ofstream cout("rental.out");

    int n, m, r; cin >> n >> m >> r;
    vector<int> milk(n), renter(r);
    vector<pair<int, int>> shops(m);

    for(auto &x : milk) cin >> x;
    for(int i = 0; i < m; i++) cin >> shops[i].first >> shops[i].second;
    for(auto &x : renter) cin >> x;

    sort(milk.begin(), milk.end(), greater<int>());
    sort(renter.begin(), renter.end(), greater<int>());
    sort(shops.begin(), shops.end(), [](auto &f, auto &s){
        return f.second > s.second;
    });
    
    
    // most milk cow with highest paying farmer 
    // least milk cow with highest paying renter
    int curCow = 0, curShop = 0, curRenter = 0;
    long long ans = 0;
    while(curCow < n) {
        int curMilk = milk[curCow], curMilkProfit = 0, t = curShop, lastRemoved = 0;

        while(t < m) {
            int amount = min(shops[t].first, curMilk);
            curMilk -= amount;
            curMilkProfit += amount * shops[t].second;

            if(curMilk == 0) {
                lastRemoved = amount;
                break;
            }
            else t++;
        }

        if(curRenter == r || curMilkProfit > renter[curRenter]) {
            ans += curMilkProfit;
            curCow++;
            if(t < m) shops[t].first -= lastRemoved;
            curShop = t;
        }
        else {
            ans += renter[curRenter++];
            n--;
        }
    }

    cout << ans;
}