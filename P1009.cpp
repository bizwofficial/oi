#include<bits/stdc++.h>

unsigned long long factorial(unsigned long long n) {
    if (n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    using namespace std;
    int n;
    unsigned long long result(0);
    cin >> n;
    for(int i = 1; i <= n; i++) {
        result += factorial((unsigned long long)(i));
    }
    cout << result;
    return 0;
}