#include <iostream>

using namespace std;
#include <iostream>
#include <vector>

using namespace std;


void solve() {
	int n, k; cin >> n >> k;
	vector<bool> f(k+1, false);
	vector<int> a(n);
	for (int& x : a) cin >> x;
	f[0] = true;
	for (int i = 0; i < n; i++)
		for (int j = k; j >= a[i]; j--)
			if (!f[j] && f[j - a[i]])
				f[j] = true;
	if (f[k]) cout << "YES\n";
	else cout << "NO\n";
}

int main() {

	int t; cin >> t;
	while (t--) solve();
	return 0;
}