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
	if (b%a) cout << b-a << endl;
	else cout << a+b << endl;
	return 0;
}

//int main() {
//	int a,b;
//	cin>>a>>b;
//	if (a == 1 && b == 1) cout << 2 << endl;
//	else if (b/a && !(b%a)) cout << a+b << endl;
//	else cout << b-a << endl;
//	return 0;
//}