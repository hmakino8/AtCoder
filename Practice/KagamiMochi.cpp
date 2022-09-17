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

/*
 * setは重複せずにsortして格納
 * 値の取り出しは、operator[]ではなくイテレータ
 * auto itr = s.begin();
 * rep(i, s.size()) cout << *itr++ << endl;
*/

int main() {
	int n;
	cin >> n;
	set<int> s;
	rep(i, n) {
		int tmp = 0;
		cin >> tmp;
		s.insert(tmp);
	}
	cout << s.size() << endl;
	return 0;
}

//int main() {
//	int n;
//	cin >> n;
//	int d[n];
//
//	rep(i, n) cin >> d[i];
//	sort(d, d+n);
//	int cnt = 1;
//	rep(i, n) {
//		if (i == 0 || d[i-1] == d[i]) continue;
//		cnt++;
//	}
//	cout << cnt << endl;
//	return 0;
//}
