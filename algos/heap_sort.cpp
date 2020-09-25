#include<bits/stdc++.h>

void heapify(long long (&A)[100000], int A_len, int node) {
    int max_node = node;
    if (2 * node < A_len && A[2*node] > A[node]) {
        max_node = 2 * node;
    } else if ((2 * node + 1) < A_len && A[2*node+1] > A[node]) {
        max_node = 2 * node + 1;
    }
    if (max_node != node) {
        long long t(A[node]);
        A[node] = A[max_node];
        A[max_node] = t;
        heapify(A, A_len, max_node);
    }
    return;
}

void build(long long (&A)[100000], int A_len) {
    for (int i(A_len/2); i >= 0; --i) {
        //std::cout << "finished building; i = " << i << std::endl;
        heapify(A, A_len, i);
    }
    return;
}

void heap_sort(long long (&A)[100000], int A_len) {
    build(A, A_len);
    //std::cout << "finished building." << std::endl;
    while (A_len > 1) {
        long long t(A[0]);
        A[0] = A[--A_len];
        A[A_len] = t;
        heapify(A, A_len, 0);
        //std::cout << "finished heapify; A_len = " << A_len << std::endl;
    }
    return;
}

int main() {
    long long A[100000];
    int n;
    std::cin >> n;
    for (int i(0); i < n; ++i) {
        std::cin >> A[i];
    }
    heap_sort(A, n);
    for (int i(0); i < n; ++i) {
        std::cout << A[i] << ' ';
    }
    std::cout << std::endl;
    return 0;
}
