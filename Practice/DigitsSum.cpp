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
	int n, mini = 1000000000;
	cin >> n;
	if (n == 10 || n == 100 || n == 1000 || n == 10000 || n == 100000) {
		cout << 10 << endl;
		return 0;
	}
	int sum = 0;
	while(n) {
		sum += n%10;
		n /= 10;
	}
	cout << sum << endl;
	return 0;
}

//int DigitSum(int num) {
//	int sum = 0;
//
//	while(num) {
//		sum += num%10;
//		num /= 10;
//	}
//	return sum;
//}
//
//int main() {
//	int n, mini = 1000000000;
//	cin >> n;
//	rep2(i, 1, n) {
//		mini = min(mini, DigitSum(i) + DigitSum(n-i));
//	}
//	cout << mini << endl;
//	return 0;
//}
