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
	int n,k,x,y;
	cin>>n>>k>>x>>y;

	int sum = 0;
	rep2(i, 1, n+1) {
		if (i <= k) sum += x;
		else sum += y;
	}
	cout << sum << endl;
	return 0;
}
