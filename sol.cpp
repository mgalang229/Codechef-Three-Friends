#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int x, y, z;
	cin >> x >> y >> z;
	if(x + z == y || y + z == x || x + y == z) {
		cout << "yes";
	}
	else cout << "no";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case(); 
	}
	//test_case();
	return 0;
}
