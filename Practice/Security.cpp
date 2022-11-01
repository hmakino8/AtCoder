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
	string s;
	cin>>s;
	rep(i,0,s.size()-1) {
		if (s[i] == s[i+1]) {
			cout << "Bad" << endl;
			return 0;
		}
	}
	cout << "Good" << endl;
}
