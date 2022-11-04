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

int main() {
	string s;
	int idxA = 200001, idxB = 0;
	cin >> s;

	rep(i, s.size()) {
		if (s[i] == 'A') idxA = min(idxA, i);
		if (s[i] == 'Z') idxB = max(idxB, i);
	}
	cout << idxB - idxA + 1 << endl;
	return 0;
}
