#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    int counter = 1;

    for(int i = 1; i < str.length(); i++) {
        if(str[i] == str[i-1]){
            counter++;
            if(counter == 7) {
                cout << "YES";
                return 0;
            }
        }
        else counter = 1; 
    }
    cout << "NO"; return 0;
    
}
