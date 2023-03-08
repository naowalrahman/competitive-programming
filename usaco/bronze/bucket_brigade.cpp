#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ifstream cin("buckets.in");
    ofstream cout("buckets.out");

    pair<int, int> barn, lake, rock;

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            char x; cin >> x;
            if(x == 'B') {
                barn.first = j;
                barn.second = i;
            }
            if(x == 'L') {
                lake.first = j;
                lake.second = i;
            }
            if(x == 'R') {
                rock.first = j;
                rock.second = i;
            }
        }
    }

    int ans = abs(barn.first - lake.first) + abs(barn.second - lake.second) - 1;
    bool c1 = barn.first < rock.first && lake.first > rock.first || 
              barn.first > rock.first && lake.first < rock.first;
    bool c2 = barn.second < rock.second && lake.second > rock.second ||
              barn.second > rock.second && lake.second < rock.second;

    if(barn.first == lake.first && barn.first == rock.first && c2)
        ans += 2;
    else if(barn.second == lake.second && barn.second == rock.second && c1)
        ans += 2;

    cout << ans;

    return 0;
}