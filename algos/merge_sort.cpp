#include<iostream>
#include<climits>

long long A[10000];

void merge(int p, int q, int r) {
    int m(q-p+1), n(r-q);
    long long left[10000], right[10000];
    for (int i(0); i < m; i++)
        left[i] = A[p+i];                       //left = A[p..q]
    for (int i(0); i < n; i++)
        right[i] = A[q+1+i];                    //right = A[q+1..r]
    left[m] = LLONG_MAX;
    right[m] = LLONG_MAX;
    int i(0), j(0);
    for (int k(p); k <= r; k++)
        if (left[i] < right[j])
            A[k] = left[i++];
        else
            A[k] = right[j++];
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
    using std::cin;
    using std::cout;
    using std::endl;
    int n;
    cin >> n;
    for (int i(0); i < n; i++)
        cin >> A[i];
    sort(0, n-1);
    for (int i(0); i < n; i++)
        cout << A[i] << endl;
    return 0;
}