/**
 * @author      : Naowal Rahman
 * @created     : 08/01/2022 10:34:41 AM
 * @filename    : A
 */

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin >> t;
    while(t--) {
        int n, H, M;
        cin >> n >> H >> M;
        vi hours(n), minutes(n);
        FOR(i, 0, n) {
            cin >> hours[i] >> minutes[i];
        }
 
        int lt24 = INT_MAX;
        int lt24m = INT_MAX;
        bool lt24found = false;
        FOR(i, 0, n) {
            if((hours[i] == H && minutes[i] >= M) || hours[i] > H) {
                // lt24 = min(lt24, hours[i]);
                // lt24m = minutes[i];
                if(hours[i] < lt24) {
                    lt24 = hours[i];
                    lt24m = minutes[i];
                }
                else if(hours[i] == lt24 && minutes[i] < lt24m) {
                    lt24m = minutes[i];
                }
                lt24found = true;
            }
        }
        
        int hour, minute, lov, lovm = INT_MAX;
        if(!lt24found) {
            lov = *min_element(hours.begin(), hours.end());
            FOR(i, 0, n) {
                if(hours[i] == lov) lovm = min(lovm, minutes[i]);
            }
            hour = lov + 24 - H;
            if(lovm < M) {
                lovm += 60;
                hour--;
            }
            minute = lovm - M;
        }
        else {
            hour = lt24 - H;
            if(lt24m < M) {
                lt24m += 60;
                hour--;
            }
            minute = lt24m - M;
        }

        cout << hour << " " << minute << "\n";
 
    }
 
    return 0;
}
