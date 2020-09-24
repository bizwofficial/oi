#include<bits/stdc++.h>

int main() {
    unsigned dec, result(0);
    std::cin >> dec;
    unsigned left = dec >> 16;
    unsigned right = dec << 16;
    std::cout << left+right << std::endl;
    return 0;
}
