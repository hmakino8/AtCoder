//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <stdio.h>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

/* setはユニークな要素を格納する連想コンテナ。
 * 要素自身がキーとなる。
 *
 * next_permutationは与えられた時点の[first, last]の範囲を
 * 起点の順列として、辞書順によるその次の順列を生成する。
 */

int main() {
	string S;
	cin >> S;
	sort(S.begin(), S.end());

	set<string> s;
	do {
		s.insert(S);
		cout << S << endl;
	} while (next_permutation(S.begin(), S.end()));
	cout << s.size() << endl;
}

//int main() {
//	string s;
//	cin >> s;
//	map<char, int> mp;
//
//	int cnt = 0;
//	for (int i = 0; i < s.size(); i++) {
//		if (mp.find(s[i]) != mp.end()) cnt++;
//		mp[s[i]]++;
//	}
//	if (cnt == 2) cout << 1 << endl;
//	else if (cnt == 1) cout << 3 << endl;
//	else cout << 6 << endl;
//	return 0;
//}
