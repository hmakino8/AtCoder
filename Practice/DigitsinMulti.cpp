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

long long DigitNum(long long x) {
	int cnt = 1;

	while(x >= 10) x /= 10, cnt++;
	return cnt;
}

int main() {
	long long n;
	cin >> n;

	//res = INT32_MAX;
	for(long long a = n/2; 0 <= a; a--) {
		int b = n / a;

		cout << DigitNum(a) << endl;
	}
		//res = min({res, DigitNum(a), DigitNum(b)});
	//cout << res << endl;
	return 0;
}
