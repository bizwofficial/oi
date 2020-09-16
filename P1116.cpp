#include<iostream>


int main() {
    using namespace std;
    int n, a[10000], result(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[j] < a[i]) {
                result++;
            }
        }
    }
    cout << result << endl;
    return 0;
}
