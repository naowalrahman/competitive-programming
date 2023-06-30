#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> tree;

void build(vector<int>& arr, int i, int L, int R) {
    if (L == R)
        tree[i] = arr[L];
    else {
        int M = (L + R) / 2;
        build(arr, 2 * i, L, M);
        build(arr, 2 * i + 1, M + 1, R);
        tree[i] = tree[2 * i] + tree[2 * i + 1];
    }
}

/**
 * i = vertex
 * iL = vertex left, iR = vertex right
 * L = query left, R = query right
 */
int sum(int i, int iL, int iR, int L, int R) {
    if (L > R)
        return 0;
    else if (iL == L && iR == R)
        return tree[i];
    else {
        int M = (iL + iR) / 2;
        // try and split the query across i vertices
        return sum(2 * i, iL, M, L, min(M, R)) +
               sum(2 * i + 1, M + 1, iR, max(M + 1, L), R);
    }
}

void update(int pos, int val, int i, int L, int R) {
    if (L == R)
        tree[i] = val;
    else {
        int M = (L + R) / 2;
        if (pos <= M)
            update(pos, val, 2 * i, L, M);
        else
            update(pos, val, 2 * i + 1, M + 1, R);

        tree[i] = tree[2 * i] + tree[2 * i + 1];
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> p(n);  // salaries
    map<int, int> sf;
    // sr[i] holds salary count from i*100+1 to (i+1)*100
    // do sr[(p[i]-1)/100]++
    vector<int> sr(1e7);  // salary range counter
    tree.resize(4 * 1e7);
    int bucketsIndexMax = (int)sr.size() - 1;
    int s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        p[i] = s;
        sf[i]++;
        sr[(s - 1) / 100]++;
    }

    build(sr, 1, 0, bucketsIndexMax);

    char qt;
    int a, b, cs, bc, bn, posa, posb, e;
    while (q--) {
        cin >> qt >> a >> b;
        if (qt == '!') {
            cs = p[a - 1];
            sf[cs]--;
            sf[b]++;
            bc = sum(1, 0, bucketsIndexMax, (cs - 1) / 100, (cs - 1) / 100);
            bn = sum(1, 0, bucketsIndexMax, (b - 1) / 100, (b - 1) / 100);
            update((cs - 1) / 100, bc - 1, 1, 0, bucketsIndexMax);
            update((b - 1) / 100, bn + 1, 1, 0, bucketsIndexMax);
        } else {
            e = 0;
            posa = (a - 1) / 100, posb = (b - 1) / 100;
            e += sum(1, 0, bucketsIndexMax, posa + 1, posb - 1);
            for (int i = a + 1; i <= min(b, (posa + 1) * 100); i++)
                e += sf[i];
            for (int i = posb * 100 + 1; i <= b - 1; i++)
                e += sf[i];

            cout << e << "\n";
        }
    }

    return 0;
}
