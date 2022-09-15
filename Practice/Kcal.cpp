//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <iomanip>
#include <stdio.h>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

/*
 * std::fixed -> 固定小数点で出力することを指定
 * std::setprecision(int n) -> 少数以下n桁で出力することを指定
 */

int main () {
	int a, b;
	cin >> a >> b;
	cout << fixed << setprecision(10);
	cout << a * b / 100.0 << endl;
	return 0;
}

//int main() {
//	double a, b;
//	cin >> a >> b;
//	cout << a/100 * b << endl;
//	return 0;
//}
