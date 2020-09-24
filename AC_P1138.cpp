#include<bits/stdc++.h>

int A[100000];

void merge(int p, int q, int r) {
    int m(q-p+1), n(r-q);
    long long left[10000], right[10000];
    for (int i(0); i < m; i++)
        left[i] = A[p+i];                       //left = A[p..q]
    for (int i(0); i < n; i++)
        right[i] = A[q+1+i];                    //right = A[q+1..r]
    left[m] = LLONG_MAX;
    right[n] = LLONG_MAX;
    int i(0), j(0);
    for (int k(p); k <= r; k++){
        if (left[i] < right[j])
            A[k] = left[i++];
        else
            A[k] = right[j++];
    }
    return;
}

void sort(int p, int r) {
    if (r > p) {
        int q = int((r + p) / 2);
        sort(p, q);
        sort(q+1, r);
        merge(p, q, r);
    }
}

int main() {
    bool signal;
    int n, k, temp, coord(0);
    std::cin >> n >> k;
    for (int i(0); i < n; ++i) {
        std::cin >> temp;
        signal = true;
        for (int j(0); j < i; ++j) {
            if (temp == A[j]) {
                signal = false;
                break;
            }
        }
        if (signal) {
            A[coord++] = temp;
        }
    }
    sort(0, coord - 1);
    if (k >= coord) {
        std::cout << "NO RESULT";
    } else {
        std::cout << A[k-1] << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
