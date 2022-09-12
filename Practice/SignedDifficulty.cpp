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
	int x,y;
	scanf("%d.%d", &x, &y);

	cout << x;
	if (y <= 2) cout << '-' << endl;
	if (y >= 7) cout << '+' << endl;
	return 0;
}

//int main() {
//	float xy;
//	cin>>xy;
//
//	int x = xy;
//	int y = (xy - (float)x)*10;
//	if (0 <= y && y <= 2) cout << x << '-' << endl;
//	else if (3 <= y && y <= 6) cout << x << endl;
//	else cout << x << '+' << endl;
//
//	return 0;
//}
