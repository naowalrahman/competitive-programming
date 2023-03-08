#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> arr, tree;

void build(int i, int L, int R) {
    if(L == R) tree[i] = arr[L];
    else {
        int M = (L + R) / 2;
        build(2*i, L, M);
        build(2*i+1, M+1, R);
        tree[i] = tree[2*i] + tree[2*i+1];
    }
}

/**
 * i = vetex
 * iL = vertex left, iR = vertex right
 * L = query left, R = query right
*/
int sum(int i, int iL, int iR, int L, int R) {
    if(L > R) return 0;
    else if(iL == L && iR == R) return tree[i];
    else {
        int M = (iL + iR) / 2;
        // try and split the query across i vertices
        return sum(2*i, iL, M, L, min(M, R)) +
               sum(2*i+1, M+1, iR, max(M+1, L), R);
    }
}

void update(int pos, int val, int i, int L, int R) {
    if(L == R) tree[i] = val;
    else {
        int M = (L + R) / 2;
        if(pos <= M) update(pos, val, 2*i, L, M);
        else update(pos, val, 2*i+1, M+1, R);

        tree[i] = tree[2*i] + tree[2*i+1];
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q; cin >> n >> q;
    arr.resize(n); 
    tree.resize(4*n);
    for(auto&x:arr) cin >> x;

    build(1, 0, n-1);
    int qt, a, b;
    while(q--) {
        cin >> qt >> a >> b;
        if(qt == 1)
            update(a-1, b, 1, 0, n-1);
        else cout << sum(1, 0, n-1, a-1, b-1) << "\n";
    }

    return 0;
}

