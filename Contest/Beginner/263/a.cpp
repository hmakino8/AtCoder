//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	vector<int> t(5);
	rep(i, 5) cin >> t[i];

	sort(t.begin(), t.end());
	if (t[0] == t[1] && t[1] != t[2] && (t[2] == t[3] && t[3] == t[4])) {
		cout << "Yes" << endl;
	}
	else if ((t[0] == t[1] && t[1] == t[2]) && t[2] != t[3] && \
		t[3] == t[4]) {
			cout << "Yes" << endl;
		}
	else cout << "No" << endl;
	return 0;
}
