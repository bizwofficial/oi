#include<iostream>
#include<iomanip>

const double PI = 3.1415926;

int main() {
	using namespace std;
	int R;
	cin >> R;
	cout << fixed << setprecision(6);
	cout << PI * R * R << endl;
	cout << double(2 * R * R);
	return 0;
}
