//#include <iostream>
//#include <numeric>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int n; cin >> n;
//	vector<int> s(n);
//	for (int& x : s) cin >> x;
//	int m; cin >> m;
//	vector<int> q(m);
//	for (int& x : q) cin >> x;
//	if (accumulate(s.begin(), s.end(), 0) / double(n) > accumulate(q.begin(), q.end(), 0) / double(m))
//		for (int& x : s) cout << x << " ";
//	else
//		for (int& x : q) cout << x << " ";
//
//
//	return 0;
//}