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
	vector<int> v(5);
	int k;
	rep(i,0,5) cin>>v[i];
	cin>>k;
	if (v[4]-v[0] > k) cout << ":(" << endl;
	else cout << "Yay!" << endl;
	return 0;
}

//int main() {
//	vector<int> v(5);
//	rep(i,0,5) cin>>v[i];
//	int k;
//	cin>>k;
//	rep(i,0,5)rep(j,i+1,5) {
//		if(abs(v[i]-v[j]) > k) {
//			cout << ":(" << endl;
//			return 0;
//		}
//	}
//	cout << "Yay!" << endl;
//	return 0;
//}
