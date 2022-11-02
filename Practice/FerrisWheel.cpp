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
	int a,b;
	cin>>a>>b;
	if (a>=13) cout << b << endl;
	else if (a>=6) cout << b/2 << endl;
	else cout << 0 << endl;
	return 0;
}
