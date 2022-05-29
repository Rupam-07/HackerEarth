#Follow me for solutions and you can contact me on rupamkarmakarcr7@gmail.com 
#please give it a star thank you


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 2e5 + 14;
ll x[N], v[N], id[N], ans[N];

int main() {
	ios::sync_with_stdio(0), cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		iota(id, id + n, 0);
		for (int i = 0; i < n; ++i)
			cin >> x[i];
		for (int i = 0; i < n; ++i)
			cin >> v[i];
		vector<pair<int, int>> con;
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j)
				if (x[i] < x[j] && v[i] > 0 && v[j] < 0)
					con.emplace_back(i, j);
		sort(con.begin(), con.end(), [](pair<int, int> a, pair<int, int> b) {
			return (x[a.second] - x[a.first]) * (v[b.first] - v[b.second]) <
				   (x[b.second] - x[b.first]) * (v[a.first] - v[a.second]);
		});
		fill(ans, ans + n, 0);
		for (auto[i, j] : con) {
			int t = (x[j] - x[i]) / (v[i] - v[j]);
			ans[id[i]] += t;
			ans[id[j]] += t;
			swap(id[i], id[j]);
		}
		for (int i = 0; i < n; ++i)
			cout << ans[i] << '\n';
	}
}