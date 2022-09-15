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
	int n, a, b;
	cin >> n >> a >> b;

	int total = 0;
	rep2(i, 1, n+1) {
		int num = i;
		int sum = 0;

		while(num > 0) {
			sum += num%10;
			num /= 10;
		}
		if (a <= sum && sum <= b) total += i;
	}
	cout << total << endl;
	return 0;
}
