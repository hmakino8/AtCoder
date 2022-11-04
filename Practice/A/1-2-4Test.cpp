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

//int main() {
//	int a,b;
//	cin >> a >> b;
//
//	int flag1 = 0, flag2 = 0, flag4 = 0;
//	int tmp = a, cnt = 2;
//	while (cnt--) {
//		if (tmp == 1) flag1 = 1;
//		if (tmp == 2) flag2 = 2;
//		if (tmp == 3) flag1 = 1, flag2 = 2;
//		if (tmp == 4) flag4 = 4;
//		if (tmp == 5) flag1 = 1, flag4 = 4;
//		if (tmp == 6) flag2 = 2, flag4 = 4;
//		if (tmp == 7) flag1 = 1, flag2 = 2, flag4 = 4;
//		if (cnt == 1) tmp = b;
//	}
//	cout << flag1+flag2+flag4 << endl;
//	return 0;
//}

int main() {
	int a, b;

	cin >> a >> b;
	cout << (a|b) << endl;
	return 0;
}
