#include<bits/stdc++.h>

int main() {
    using namespace std;
    int k;
    cin >> k;
    long long i(0);
    long double s(0);
    while (true) {
        ++i;
        s += 1/(long double)i;
        if (s > (long double) k) {
            break;
        }
    }
    cout << i << endl;
}