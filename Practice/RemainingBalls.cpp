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
	string s,t,u;
	int a,b;
	cin>>s>>t>>a>>b>>u;
	if (s==u) a -= 1;
	else b -= 1;
	cout << a << ' ' << b << endl;
	return 0;
}
