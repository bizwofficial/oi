#include<iostream>

int factorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main() {
    using namespace std;
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}