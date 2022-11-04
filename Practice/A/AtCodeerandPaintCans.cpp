//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <stdio.h>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b>>c;

	int cnt = 3;
	map<int, int> mp;
	mp[a]++;
	if (mp[b] >= 1) cnt--;
	if (mp[c] >= 1) cnt--;
	cout << cnt << endl;
	return 0;
}

//int main() {
//	int a,b,c;
//	cin>>a>>b>>c;
//
//	int cnt = 3;
//	if (a == b) cnt--;
//	if (a == c) cnt--;
//	if (b == c) cnt--;
//	if (cnt == 0) cnt++;
//	cout << cnt << endl;
//}
