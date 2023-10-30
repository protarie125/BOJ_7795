#include <algorithm>
#include <bit>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

int n, m;
vi as, bs;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	while (0 < (t--)) {
		cin >> n >> m;

		as = vi(n);
		for (auto&& a : as) {
			cin >> a;
		}

		bs = vi(m);
		for (auto&& b : bs) {
			cin >> b;
		}
		sort(bs.begin(), bs.end());

		auto ans = ll{ 0 };
		for (const auto& a : as) {
			const auto itu = std::upper_bound(bs.begin(), bs.end(), a,
				[](auto x, auto y) { return x <= y;  });
			const auto val = std::distance(bs.begin(), itu);
			ans += val;
		}

		cout << ans << '\n';
	}

	return 0;
}