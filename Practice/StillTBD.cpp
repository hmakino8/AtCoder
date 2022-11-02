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
	int m = (s[5]-'0')*10+s[6]-'0';
	if (m>4) cout << "TBD" << endl;
	else cout << "Heisei" << endl;
}
