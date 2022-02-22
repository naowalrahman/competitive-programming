#include <bits/stdc++.h>

using namespace std;

int main() {
    int counter = 0;
    int n;
    string s;
    cin >> n >> s;

    vector<char> slist(s.begin(), s.end());

    for(int i = 0; i < n - 1; i++) { 
        if(slist[i] == slist[i + 1]) {
            counter++;
        }
    }

    cout << counter; 
}