#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
typedef pair<int, int> Time;
bool ycomp(Time t1, Time t2) {
    return t1.second < t2.second; 
}

void printTime(Time &t) {
    cout << "(" << t.first << ", " << t.second << ")";
}

void printTimeVect(vector<Time> &v) {
    for(Time t : v) {
        printTime(t);
        cout << ", ";
    }
    cout << "\n";
}

int main() {
    int n; cin >> n;
    vector<Time> times(n);
    for(int i = 0; i < n; i++) cin >> times[i].first >> times[i].second;
    printTimeVect(times);

    sort(all(times));
    printTimeVect(times);
    for(int i = 0; i < n; i++) {
        times[i].second = times[i].second - times[i].first + i+1;
        times[i].first = i+1;
    }
    printTimeVect(times);
    // sort(all(times), ycomp);
    // printTimeVect(times);
    // for(int i = 0; i < n; i++) times[i].second = i+1;
    // printTimeVect(times);



    vector<int> ppl(n+1);
    for(Time t : times) {
        ppl[t.first] = 1;
        if(t.second <= n) ppl[t.second] = -1;
    }
    for(int i = 1; i <= n; i++) ppl[i] += ppl[i-1];
    int ans = 0;
    for(int p : ppl) {
        ans = max(ans, p);
        cout << p << " ";
    }
    cout << ans << "\n";

}