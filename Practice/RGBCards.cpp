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
	int r,g,b;
	cin>>r>>g>>b;
	if ((r*100+g*10+b) % 4 == 0) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
