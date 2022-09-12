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
	int a,b;
	cin>>a>>b;
	cout<<(a^b)<<endl;
	return 0;
}

//int main() {
//	int a,b;
//	cin>>a>>b;
//	rep(i, 256) {
//		if ((a^i) == b) {
//			cout << i << endl;
//			return 0;
//		}
//	}
//	return 0;
//}
