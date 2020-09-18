#include<iostream>
#include<climits>

int main() {
    using namespace std;
    int n, max_length(1), current_length(1);
    long long a[10000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    a[n] = LLONG_MAX;
    for (int i = 1; i < n+1; i++) {
        if (a[i] == a[i-1]+1) {
            current_length++;
        } else {
            if (current_length > max_length)
                max_length = current_length;
            current_length = 1;
        }
        //cout << i << ": current_length=" << current_length << "; max_length=" << max_length << "; a[i]=" << a[i] << "; a[i-1]=" << a[i-1] << endl;
    }
    cout << max_length << endl;
    return 0;
}