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
	int x;
	cin >> x;

	if (x == 0 || x%100 != 0) cout << "No" << endl;
	else cout << "Yes" << endl;
	return 0;
}

//int main() {
//	int x;
//	cin >> x;
//
//	if (x/100 != 0 && x%100 == 0) cout << "Yes" << endl;
//	else cout << "No" << endl;
//	return 0;
//}
