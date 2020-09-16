#include<iostream>
#include<cstring>
#include<sstream>

int main() {
    using namespace std;
    int m, n, current_num;
    string nn;
    cin >> m >> nn;
    for (int i = 0; i < nn.length(); i++) {
        if (nn.at(i) != '0') {
            cout << nn.at(i) << "*" << m << "^" <<nn.length()-i-1;
            if (i != nn.length()-1) {
                cout << "+";
            }
        }
    }
    return 0;
}
