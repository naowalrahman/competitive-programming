#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    vector<char> v;

    for(char c: str)
        if(c != '+') 
            v.push_back(c);
        


    sort(v.begin(), v.end()); 

    for(int i = 0; i < v.size(); i++)
        if(i != v.size() - 1) 
            cout << v[i] << '+';
        else cout << v[i];

    return 0;
    
}