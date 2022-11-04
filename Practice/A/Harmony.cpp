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
	int k = (a+b)/2;

	if (abs(a-k) == abs(b-k)) cout << k << endl;
	else cout << "IMPOSSIBLE" << endl;
}

//int main() {
//	int a,b;
//	cin>>a>>b;
//	for (int k = min(a,b); k <= max(a,b); k++) {
//		if (abs(a-k) == abs(b-k)) {
//			cout << k << endl;
//			return 0;
//		}
//	}
//	cout << "IMPOSSIBLE" << endl;
//	return 0;
//}
