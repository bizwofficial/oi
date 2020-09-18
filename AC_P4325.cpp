#include<iostream>

int result[10];

int main() {
	using namespace std;
	int a[10], n(0);
	bool symbol;
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
		result[i] = a[i] % 42;
	}
	//for (int i = 0; i < 10; i++) {
	//	cout << result[i] << endl;
	//}
	for (int i = 0; i < 10; i++) {
		symbol = true;
		for (int j = 0; j < i; j++)
			if (result[i] == result[j])
				symbol = false;
		if (symbol)
			n++;
	}
	cout << n << endl;
	return 0;
}
