#include <bits/stdc++.h>
using namespace std;

int n;
vector<long long> bit;

void update(int idx, long long val) {
    while (idx <= n) {
        bit[idx] += val;
        idx += idx & -idx;
    }
}

long long query(int idx) {
    long long sum = 0;

    while (idx > 0) {
        sum += bit[idx];
        idx -= idx & -idx;
    }

    return sum;
}

long long rangeSum(int l, int r) {
    return query(r) - query(l - 1);
}

int main() {
    cout << "Enter array size: ";
    cin >> n;

    bit.resize(n + 1, 0);

    cout << "Enter array elements: ";
    for (int i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        update(i, x);
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    while (q--) {
        char type;

        cout << "\nEnter query (A = Add, B = Range Sum): ";
        cin >> type;

        if (type == 'A') {
            int idx;
            long long val;

            cout << "Enter index and value: ";
            cin >> idx >> val;

            update(idx, val);
        }
        else if (type == 'B') {
            int l, r;

            cout << "Enter left and right index: ";
            cin >> l >> r;

            cout << "Range Sum = " << rangeSum(l, r) << '\n';
        }
    }

    return 0;
}