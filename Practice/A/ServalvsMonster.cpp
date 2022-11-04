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
	int h,a;
	cin>>h>>a;
	cout << (h+a-1)/a << endl;
	return 0;
}

//int main() {
//	int h,a;
//	cin>>h>>a;
//	if (h <= a) cout << 1 << endl;
//	else cout << h/a+(h%a != 0) << endl;
//	return 0;
//}
