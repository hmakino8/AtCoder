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
	string n;
	cin>>n;
	rep(i,0,3) {
		if (n[i] == '1') n[i] = '9';
		else n[i] = '1';
	}
	cout << n << endl;
	return 0;
}
