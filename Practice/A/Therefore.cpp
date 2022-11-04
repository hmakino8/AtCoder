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
	int n;
	string ans;
	cin>>n;
	if (n%10 == 2) ans = "hon";
	if (n%10 == 4) ans = "hon";
	if (n%10 == 5) ans = "hon";
	if (n%10 == 7) ans = "hon";
	if (n%10 == 9) ans = "hon";
	if (n%10 == 0) ans = "pon";
	if (n%10 == 1) ans = "pon";
	if (n%10 == 6) ans = "pon";
	if (n%10 == 8) ans = "pon";
	if (n%10 == 3) ans = "bon";
	cout << ans << endl;
	return 0;
}
