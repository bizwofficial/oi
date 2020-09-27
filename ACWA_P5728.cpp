#include<bits/stdc++.h>

struct Score {
    long yuwen;
    long shuxue;
    long yingyu;
};

int main() {
    using namespace std;
    int n, sum(0);
    cin >> n;
    Score *a = new Score[n];
    for(int i(0); i < n; ++i) {
        cin >> a[i].yuwen >> a[i].shuxue >> a[i].yingyu;
    }
    for (int i(0); i < n; ++i) {
        for (int j(i+1); j < n; ++j) {
            if (abs(a[i].yuwen-a[j].yuwen) <= 5 && abs(a[i].shuxue-a[j].shuxue) <= 5 && abs(a[i].yingyu-a[j].yingyu) <= 5) {
                if (abs(a[i].yuwen+a[i].shuxue+a[i].yingyu-(a[i].yuwen+a[i].shuxue+a[i].yingyu)) <= 10) {
                    ++sum;
                }
            }
        }
    }
    cout << sum << endl;
    return 0;
}