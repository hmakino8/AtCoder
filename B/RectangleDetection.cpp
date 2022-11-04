//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <stdio.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	vector<string> s(10);
	vector<int> st(2);
	vector<int> ed(2);

	rep(i,0,10) cin>>s[i];
	bool flag = false;
	rep(i,0,10)rep(j,0,10) {
		if (s[i][j] == '#') {
			if (!flag)
			{
				st[0] = i;
				st[1] = j;
				flag = true;
			}
			ed[0] = i;
			ed[1] = j;
		}
	}
	cout << st[0]+1 << ' ' << ed[0]+1 << endl;
	cout << st[1]+1 << ' ' << ed[1]+1 << endl;
	return 0;
}
