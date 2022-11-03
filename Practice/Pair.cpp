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
	int a,b,k;
	cin>>k;
	a = k/2;
	b = k-a;
	cout << a*b << endl;
}

//int main() {
//	int k;
//	cin>>k;
//	if (k%2) cout << (k/2+1)*(k/2) << endl;
//	else cout << (k*k)/4 << endl;
//	return 0;
//}
