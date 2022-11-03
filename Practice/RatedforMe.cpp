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
	int r;
	cin>>r;
	if (r < 1200) cout << "ABC" << endl;
	else if (r < 2800) cout << "ARC" << endl;
	else cout << "AGC" << endl;
	return 0;
}
