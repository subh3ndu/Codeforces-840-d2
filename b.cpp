#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// B. Incinerate

void solve() {
    int n, k;
	cin >> n >> k;
	vector<pair<int, int> > a(n);

	for (auto &[_, x] : a)
		cin >> x;
	for (auto &[x, _] : a)
		cin >> x;

	int sum = 0;
	sort(a.begin(), a.end());
	k += a[0].first;
	for (int i=0; i<n; ++i) {
		while (a[i].second - sum > 0) {
			k -= a[i].first;
			if (k <= 0) {
				cout << "NO\n";
				return;
			}
			sum += k;
		}
	}
	cout << "YES\n";
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
