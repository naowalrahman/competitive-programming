#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n; cin >> n;
    vector<char> direction;
    vector<long long> location;
    for(long long i = 0; i < n; i++) {
        char d; long long l;
        cin >> d >> l;
        direction.push_back(d);
        location.push_back(l);
    }

    if(direction.size() == 1) { 
        cout << 0;
        return 0;
    }

    vector<char> directionG;
    vector<char> directionL;
    for(long long i = 0; i < n; i++) {
        if(direction[i] == 'G') 
            directionG.push_back(location[i]);
        else 
            directionL.push_back(location[i]);
    }

    long long gc = *max_element(directionG.begin(), directionG.end());
    long long lc = *min_element(directionL.begin(), directionL.end());

    long long Ginv = 0;
    long long Linv = 0;
    for(long long i = 0; i < n; i++) {
        if(location[i] < gc && direction[i] == 'L') Ginv++;
        if(location[i] > lc && direction[i] == 'G') Linv++;
    }

    cout << min(Ginv, Linv);

    return 0;
}