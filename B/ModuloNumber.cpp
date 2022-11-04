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

/*
 * c/c++の負の剰余演算は注意！被除数が負の時、答えが異なる。
 * -17 % 3 = -2となるが、正しくは1なので、3+(-2)の処理が必要。
*/

int main() {
	long long n, y;
	cin>>n;
	y = 998244353;
	int mod = n % y;

	if (mod < 0) cout << mod + y << endl;
	else cout << mod << endl;
	return 0;
}
