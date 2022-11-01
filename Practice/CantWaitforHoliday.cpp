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
	vector<string> week = {
		"SAT",
		"FRI",
		"THU",
		"WED",
		"TUE",
		"MON",
		"SUN"
	};
	string date;
	cin>>date;

	rep(i, 0, 7) {
		if (week[i] == date) cout << i+1 << endl;
	}
}
