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
	int a,b,c;
	cin>>a>>b>>c;
	int s = abs(a-b);
	int t = abs(b-c);
	int u = abs(c-a);
	cout << s+t+u-max({s,t,u}) << endl;
	return 0;
}
