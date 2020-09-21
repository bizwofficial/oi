#include<bits/stdc++.h>
//solve Introduction to Algorithms, Third Edition, p.74, T4.1-5
//time complexity O(n)

struct Result {
    int start;
    int end;
    long long max_sum;
};


Result find_max_subarray(int n, long long A[]) {
    int start(0), end(0), cache_start(0);
    long long max_sum(A[0]), cache_sum(A[0]);
    for (int i = 1; i < n; i++) {
        if (A[i] > 0) {
            if (cache_sum > 0) {
                if (cache_sum+A[i] > max_sum) {
                    cache_sum += A[i];
                    max_sum = cache_sum;
                    end = i;
                    start = cache_start;
                } else {
                    cache_sum += A[i];
                }
            } else {
                if (A[i] > max_sum) {
                    max_sum = A[i];
                    cache_sum = A[i];
                    start = i;
                    end = i;
                    cache_start = i;
                } else {
                    cache_sum = A[i];
                    cache_start = i;
                }
            }
        } else {
            if (cache_sum > 0) {
                cache_sum += A[i];
            } else {
                cache_sum = A[i];
                cache_start = i;
            }
        }
    }
    Result r {start, end, max_sum};
    return r;
}

int main() {
    using namespace std;
    int n;
    cin >> n;
    long long *A = new long long[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    Result r = find_max_subarray(n, A);
    cout << "Start Location: " << r.start << endl
         << "End Location: " << r.end << endl
         << "Sum: " << r.max_sum << endl;
    return 0;
}