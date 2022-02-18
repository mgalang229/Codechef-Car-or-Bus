#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x, y;
		cin >> x >> y;
		// simply compare the two values
		string ans = "SAME";
		if (x < y) {
			ans = "BIKE";
		} else if (x > y) {
			ans = "CAR";
		}
		cout << ans << '\n';
	}
	return 0;
}