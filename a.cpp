#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// A. Absolute Maximization

void solve() {
    int n, x;
    cin >> n;
    int a = 0, b = 2047;
    while(n--) {
        cin >> x;
        a |= x;
        b &= x;
    }
    cout << a - b << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    for(int i=1; i<=test; i++) {
        solve();
    }

    return 0;
}
