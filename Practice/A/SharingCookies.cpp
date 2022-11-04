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
	if (a%3 == 0 || b%3 == 0 || (a+b)%3 == 0) {
		cout << "Possible" << endl;
	}
	else cout << "Impossible" << endl;
	return 0;
}
