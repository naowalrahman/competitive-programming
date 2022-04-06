#include <bits/stdc++.h>
using namespace std;

int main () {
    string input;
    getline(cin, input);

    set<char> output(input.begin(), input.end());

    if(output.size() % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
}