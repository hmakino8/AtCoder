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
	if (abs(x-a) < abs(x-b)) cout << 'A' << endl;
	else cout << 'B' << endl;
	return 0;
}
