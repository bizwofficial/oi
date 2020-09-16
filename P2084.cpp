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
    cout << nn << endl;
    return 0;
}