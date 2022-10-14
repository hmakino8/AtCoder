//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <stdio.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

//int main() {
//	int x,y,z;
//	cin>>x>>y>>z;
//
//	if (!(0<y && y<x)) cout << abs(x) << endl;
//	else if (0<y && y<z) cout << -1 << endl;
//	else cout << abs(z)+abs(x-z) << endl;
//
//	return 0;
//}

bool f(int a, int b, int p) {
	if (a>b) swap(a,b);
	return a<p && p<b;
}

int main() {
	int x,y,z;
	cin>>x>>y>>z;

	if (f(0,x,y)) {
		if (f(0,y,z)) cout << -1 << endl;
		else cout << abs(z) + abs(z-x) << endl;
	}
	else cout << abs(x) << endl;
	return 0;
}
