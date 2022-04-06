#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // input is 10^5 (you can o(n) this)
    int n; cin >> n;
    string s; cin >> s;
    
    // prefix sum array of maximum Gs in even
    // index after reversal of prefix
    int og_Gs_even = 0;
    vector<int> ps_o;
    vector<int> ps_r;
    for(int i = 1; i < n; i += 2) {
        if(s[i] == 'G') og_Gs_even++;

        if(i - 1 == 0 && s[i - 1] == 'G')
            ps_r.push_back(1);
        else if(s[i - 1] == 'G')
            ps_r.push_back(ps_o.back() + 1);
        else
            ps_r.push_back(ps_o.back());

        if(i == 1 && s[i] == 'G')
            ps_o.push_back(1);
        else if(s[i] == 'G')
            ps_o.push_back(ps_r.back() + 1);
        else 
            ps_o.push_back(ps_r.back());
    }

    // testing prefix stuff
    // for(int i = 0; i < ps.size(); i++) {
    //     cout << ps[i] << " -> ";
    // }
    
    // int num_moves = 0;
    // while(curr_Gs_even != max_Gs_even) { 
    //     int max_Gs_index = 2 * distance(ps.begin(), max_element(ps.begin(), ps.end())) + 1;
    //     reverse(s.begin(), s.end() - max_Gs_index);
    //     curr_Gs_even = *max_element(ps.begin(), ps.end());
    //     num_moves++;
    // }

    int num_moves = 0;
    int curr_max_Gs_even = og_Gs_even;

    // find max Gs in even spots
    for(int i = 1; i < n; i += 2) {
        string s_tmp = s; 
        reverse(s_tmp.begin(), s_tmp.begin() + i + 1);
        curr_max_Gs_even = max(curr_max_Gs_even, og_Gs_even - ps_o[(i - 1) / 2] + ps_r[(i - 1) / 2]);
        num_moves++;
    }
    cout << num_moves << "\n" << curr_max_Gs_even;
    

    return 0;
}