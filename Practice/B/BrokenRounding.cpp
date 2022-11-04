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

/*
 * x = 3141592のnの位の数はx/n%10
 * 100の位の場合、x/100 = 31415 => x%10 = 5
 *
 * nの位の切り捨てはx/(n*10)*(n*10)
 * 100のくらいの場合、x/1000 = 3141 => x*1000 = 3141000
*/

int main() {
	long long x, k, r;
	cin>>x>>k;

	r = 1;
	rep(i,0,k) {
		int d = x/r%10;
		r *= 10;
		if (d >= 5) x += r;
		x = x/r*r;
	}
	cout << x << endl;
	return 0;
}
