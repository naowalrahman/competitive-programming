#include <bits/stdc++.h>
using namespace std;

template<class integer>
inline integer to_int(const string& s, size_t* idx = 0, int base = 10) {
	size_t n = s.size(), i = idx ? *idx : 0; bool sign = false; integer x = 0;
	if (s[i] == '-')
		++i, sign = true;
	function<int(char)> char_to_digit = [&](char c) {
		static const int d[] = {'a'-10,'0'}; 
		return tolower(c)-d[isdigit(c)]; };
	while (i < n)
		x *= base, x += char_to_digit(s[i++]);
	if (idx)
		*idx = i; 
	return sign ? -x : x; }
 
template<class integer>
inline string to_string(integer x, int base = 10) {
	bool sign = false; string s;
	if (x < 0)
		x = -x, sign = true;
	function<char(int)> digit_to_char = [](int d) {
		static const char c[] = {'a'-10,'0'};
		return c[d < 10]+d; };
	do 
		s += digit_to_char(x%base), x /= base;
	while (x > 0); 
	if (sign)
		s += '-';
	reverse(s.begin(),s.end());
	return s; }
 
template<class integer>
inline istream& read(istream& is, integer& x) {
	string s; is >> s, x = to_int<integer>(s); return is; }
 
template<class integer>
inline ostream& write(ostream& os, integer x) { return os << to_string(x); }
 
using  lll =   signed __int128; 
 
inline istream& operator>>(istream& is,  lll &x) { return  read(is,x); }
inline ostream& operator<<(ostream& os,  lll  x) { return write(os,x); }

__int128 square_root(__int128 n) {
    __int128 low = 0, high = n;
    while(low <= high) {
        __int128 mid = (low + high) / 2;
        if(n % mid == 0 && n / mid == mid) return mid;
        else if(n / mid > mid) low = mid + 1;
        else high = mid - 1;
    }
    return 0;
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int tc; cin >> tc;
    while(tc--) {
        __int128 n, c, t = 0, x;
        cin >> n >> c;
        for(int i = 0; i < n; i++) {
            cin >> x;
            t += x;
            c -= x * x;
        }

        __int128 ans = (square_root(t * t + n * c) - t) / (2 * n);
        cout << ans << "\n";
    }
    
    return 0;
}