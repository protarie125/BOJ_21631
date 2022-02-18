#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	long long a, b;
	cin >> a >> b;

	cout << (a + 1 < b ? a + 1 : b);

	return 0;
}