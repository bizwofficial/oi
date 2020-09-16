#include<iostream>
#include<cstring>
#include<sstream>

int main() {
    using namespace std;
    int m, n, current_num;
    cin >> m >> n;
    stringstream ss;
    string nn;
    ss << n;
    ss >> nn;
    for (int i = 0; i < nn.length(); i--) {
        if (nn.at(i) != "0") {
            cout << nn.at(0) << "*" << m << "^" <<nn.length()-i-1;
            if (i != nn.length()-1) {
                cout << "+";
            }
        }
    }
    cout << nn << endl;
    return 0;
}