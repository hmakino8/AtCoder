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
	int x,a,b;
	cin>>x>>a>>b;

	if (a-b >= 0) cout << "delicious" << endl;
	else if (b-a <= x) cout << "safe" << endl;
	else cout << "dangerous" << endl;
	return 0;
}
