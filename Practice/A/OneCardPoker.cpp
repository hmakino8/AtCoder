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
//	if (a == 1 && b != 1) cout << "Alice" << endl;
//	else if (a != 1 && b == 1) cout << "Bob" << endl;
//	else if (a > b) cout << "Alice" << endl;
//	else if (a < b) cout << "Bob" << endl;
//	else cout << "Draw" << endl;
//
//	return 0;
//}

int main() {
	int a,b;
	cin >> a >> b;

	if (a == 1) a += 13;
	if (b == 1) b += 13;
	if (a > b) cout << "Alice" << endl;
	else if (a < b) cout << "Bob" << endl;
	else cout << "Draw" << endl;

	return 0;
}
