#include<iostream>

long long s[100000], w[100000];
int N, R, Q;

void merge(int p, int q, int r) {
    int m(q-p+1), n(r-q);
    long long left[100000], right[100000], wd[100000];
    for (int i(0); i < m; i++)
        left[i] = s[p+i];                       //left = score[p..q]
    for (int i(0); i < n; i++)
        right[i] = s[q+1+i];                    //right = score[q+1..r]
    for (int i(0); i < 2*N; i++)
        wd[i] = w[i];
    left[m] = LLONG_MAX;
    right[n] = LLONG_MAX;
    int i(0), j(0);
    for (int k(p); k <= r; k++){
        if (left[i] < right[j]){
            s[k] = left[i++];
            w[k] = wd[p+i];
        }
        else {
            s[k] = right[j++];
            w[k] = wd[q+1+j];
        }
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
    using namespace std;
    cin >> N;
    cin >> R;
    cin >> Q;
    for (int i(0); i < 2*N; i++) {
        cin >> s[i];
    }
    for (int i(0); i < 2*N; i++) {
        cin >> w[i];
    }
    for (int i(0); i < R; i++) {
        sort(0, 2*N-1);
        for (int j(0); j < N; j++) {
            if (w[2*j] < w[2*j+1]) {
                s[2*j+1]++;
            }
            else if(w[2*j] > w[2*j+1]) {
                s[2*j]++;
            }
        }
    }
}