#include<bits/stdc++.h>

int main() {
    using namespace std;
    int k;
    cin >> k;
    long long i;
    long double s(0);
    while (true) {
        ++i;
        s += (long double)(1/i);
        if (s > (long double) k) {
            break;
        }
    }
    cout << i << endl;
}