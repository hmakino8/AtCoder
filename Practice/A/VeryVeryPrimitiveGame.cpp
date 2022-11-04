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

//int main() {
//	int a, b, c;
//	cin >> a >> b >> c;
//
//	int mini = min(a, b);
//	if (abs(a-b) == 0) {
//		if (c) cout << "Takahashi" << endl;
//		else cout << "Aoki" << endl;
//	}
//	else {
//		if (a<b) cout << "Aoki" << endl;
//		else cout << "Takahashi" << endl;
//	}
//	return 0;
//}

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	cout << (a > b-c ? "Takahashi" : "Aoki") << endl;
	return 0;
}
