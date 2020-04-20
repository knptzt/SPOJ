//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//bool isPrime(int n) {
//	if (n == 2 || n == 3) return true;
//	if (n % 2 == 0 || n % 3 == 0 || n < 5) return false;
//	int sn = sqrt(n);
//	for (int i = 5; i <= sqrt(n); i+=6)
//		if (n % i == 0 || n % (i + 2) == 0)
//			return false;
//	return true;
//}
//
//int main() {
//	int n; cin >> n;
//	if (isPrime(n)) cout << "YES";
//	else cout << "NO\n";
//	return 0;
//}