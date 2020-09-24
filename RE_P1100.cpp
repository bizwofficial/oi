#include<bits/stdc++.h>

void dec_to_bin(short (&a)[32], unsigned dec) {
    unsigned count(dec), loc(31);
    while (true) {
        if (count == 1 || count == 0) {
            a[loc] = count;
            break;
        } else {
            a[loc--] = short(count % 2);
            count /= 2;
        }
    }
    return;
}

void bin_to_dec (short a[], unsigned &dec) {
    for (int i(0); i < 32; ++i) {
        dec += unsigned(a[i]);
    }
    return;
}

void exchange_bits(short (&a)[32]) {
    short left[16];
    for (int i(0); i < 12; ++i) {
        left[i] = a[i];
    }
    for (int i(16); i < 32; ++i) {
        a[16-i] = a[i];
        a[i] = left[16-i];
    }
    return;
}

int main() {
    unsigned dec, result(0);
    std::cin >> dec;
    short a[32]{0};
    dec_to_bin(a, dec);
    exchange_bits(a);
    bin_to_dec(a, result);
    std::cout << result << std::endl;
    return 0;
}
