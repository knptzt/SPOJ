//#include <iostream>
//
//using namespace std;
//
//const int N = 100;
//
//long long f[N];
//
//void init() {
//	f[0] = 0;
//	f[1] = 1;
//	for (int i = 2; i < 93; i++)
//		f[i] = f[i - 2] + f[i - 1];
//}
//
//char G(int n, long long i) {
//	if (n == 1) return 'A';
//	if (n == 2) return 'B';
//	if (i > f[n - 2]) return G(n - 1, i - f[n - 2]);
//	else return G(n - 2, i);
//}
//
//
//void solve() {
//	int n; 
//	long long i;
//	cin >> n >> i;
//	cout << G(n, i) << "\n";
//}
//
//int main() {
//	init();
//	int t; cin >> t;
//	while (t--) solve();
//
//	return 0;
//}