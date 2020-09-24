#include<bits/stdc++.h>

std::string to_upper(std::string s) {
    for(int i = 0; i < s.length(); ++i) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 32;
        }
    }
    return s;
}

char to_upper(char c) {
    if (c >= 'a' && c <= 'z') {
        c -= 32;
    }
    return c;
}

int main() {
    using namespace std;
    string k, c, m;
    cin >> k >> c;
    k = to_upper(k);
    int k_len(k.length()), loc(0);
    for (int i = 0; i < c.length(); ++i) {
        bool is_upper = (c[i] >= 'A' && c[i] <= 'Z') ? true : false;
        c[i] = (to_upper(c[i]) - k[loc++] + 26) % 26 + 65;
        if (!is_upper) {
            c[i] += 32;
        }
        if (loc >= k_len) {
            loc = 0;
        }
    }
    cout << c << endl;
    return 0;
}
