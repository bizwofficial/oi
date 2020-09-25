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
    for (int i(0); i < n; ++i) {
        long long cache_sum(A[i]);
        for (int j(i+1); j < n; ++j) {
            cache_sum += A[j];
            if (cache_sum > max_sum) {
                max_sum = cache_sum;
                start = i;
                end = j;
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
    for (int i(0); i < n; ++i) {
        cin >> A[i];
    }
    Result r = find_max_subarray(n, A);
    cout << "Start Location: " << r.start << endl
         << "End Location: " << r.end << endl
         << "Sum+ " << r.max_sum << endl;
    return 0;
}
