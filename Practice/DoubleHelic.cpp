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
	char b;
	string s = "ATCG", t = "TAGC";
	cin>>b;
	rep(i,0,4) if (s[i] == b) cout << t[i] << endl;
	return 0;
}

//int main() {
//	char b;
//	cin>>b;
//	if (b == 'A') cout << 'T' << endl;
//	else if (b == 'T') cout << 'A' << endl;
//	else if (b == 'C') cout << 'G' << endl;
//	else if (b == 'G') cout << 'C' << endl;
//	return 0;
//}
