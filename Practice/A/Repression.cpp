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
	int a,b,c; cin>> a>> b>> c;
	cout << a+b+c - min({a,b,c}) << endl;
}

//int main() {
//	vector<int> num(3);
//	rep(i, 3) cin>>num[i];
//	sort(num.begin(), num.end());
//	cout << num[1] + num[2] << endl;
//	return 0;
//}
//
