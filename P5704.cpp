#include<iostream>

int main() {
	using std::cin;
	using std::cout;
	char alpha;
	cin >> alpha;
	cout << char(int(alpha) - 32);
	return 0;
}
