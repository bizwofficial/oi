#include<bits/stdc++.h>
//solve Introduction to Algorithms, Third Edition, p.
//time complexity O(n^2)

struct Result {
    int start;
    int end;
    long long max_sum;
};

Result find_max_subarray(int n, long long A[]) {
    int start(0), end(0);
    long long max_sum(A[0]);
}