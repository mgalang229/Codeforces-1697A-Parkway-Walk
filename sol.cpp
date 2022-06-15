#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, m;
	cin >> n >> m;
	int a[n];
	for(int i=0; i<n; ++i)
		cin >> a[i];
	int ans=0;
	for(int i=0; i<n; ++i) {
		if(a[i]<=m)
			m-=a[i];
		else {
			int d=a[i]-m;
			ans+=d;
			m=0;
		}
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
