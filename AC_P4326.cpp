#include<iostream>
#include<iomanip>

const double PI = 3.14159265358979323846264;

int main() {
	using namespace std;
	int R;
	cin >> R;
	cout << fixed << setprecision(6);
	cout << PI * R * R << endl;
	cout << double(2 * R * R);
	return 0;
}
