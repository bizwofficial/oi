#include<iostream>

int main() {
	using namespace std;
	int a[31], i(0), current_sum, result(0);
	while (cin >> a[i++]);
	//i--;
	//cout << i << endl << endl;
	//for (int j = 0; j < i; j++) {
	//	cout << a[j] << endl;
	//}
	for (int j = 0; j < i; j++) {
		current_sum = a[j];
		//cout << current_sum << endl;
		for (int k = j+1; k < i; k++) {
			current_sum += a[k];
			for (int l = j; l < k; l++) {
				current_sum += a[l];
			}
		}
		result += current_sum;
		//cout << result << endl;
	}
	cout << result << endl;
	return 0;
}

