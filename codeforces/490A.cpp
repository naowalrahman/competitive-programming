#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,i,a[4][5050],b[4],c,d;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>c;
		a[c][b[c]++]=i;
	}
	d=min(b[1],min(b[2],b[3]));
	cout<<d<<endl;
	for(i=0;i<d;i++)
	{
		cout<<a[1][i]<<" "<<a[2][i]<<" "<<a[3][i]<<endl;
	}
	return 0;
}