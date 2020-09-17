#include<iostream>
#include<cstring>

int main() {
    using namespace std;
    int m;
    string n;
    cin >> m >> n;
    for (int i = 0; i < n.length(); i++) {
        if (n.at(i) != '0') {
            if (i != 0) {
                cout << "+";
            }
            cout << n.at(i) << "*" << m << "^" <<n.length()-i-1;
        }
    }
    return 0;
}
