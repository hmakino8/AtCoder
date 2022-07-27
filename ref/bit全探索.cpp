/* vector Sの文字列の組み合わせは2^n通り。
 * 0以上2^n未満の2進数のbitが立っている桁をi番目とした
 * S[i]の文字列について、その文字列中にある文字が、
 * ちょうどk個の文字列に含まれるときの文字の種類の最大値を考える。
 * 000・・・000以上(0はn個数)
 * 000・・・0001
 * 000・・・0010
 * 		:
 * 		:
 * 111・・・1111
 * 100・・・00000未満(1<<n)
 *
 * ex)
 * n = 4, k = 2
 * abi
 * aef
 * bc
 * acg
 *
 * sが2進数で1011つまり(abi, bc, acg)の組み合わせの時、
 * a, b, cがちょうど2個の文字列に含まれ、最大となる。
 * map<char, int>はそれぞれの文字列において、
 * abi -> <a, 1>, <b, 1>, <i, 1>
 * bc  -> <b, 2>, <c, 1>
 * acg -> <a, 2>, <c, 2>, <g, 1>
 */

#include <bits/stdc++.h>
#include <vector>
#include <map>
#define rep(i, b) for(int i = 0; i < b; i++)
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<string> S(n);
	rep(i, n) cin >> S[i];

	int ans = 0;

	rep(s, 1<<n) {
		int now = 0;
		map<char, int> cnt;
		rep(i, n) {
			if (s>>i&1) {
				for (char c : S[i]) cnt[c]++;
			}
		}
		for (auto p : cnt) if (p.second == k) ++now;
		ans = max(ans, now);
	}
	cout << ans << endl;
	return 0;
}
