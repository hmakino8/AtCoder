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
	set<int> s;
	rep(i,0,3) {int x; cin>>x; s.insert(x);};
	if (s.size() == 2) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

//int main() {
//	vector<int> n(3);
//	rep(i,0,3) cin>>n[i];
//	sort(n.begin(),n.end());
//	if (n[0] != n[1] && n[1] != n[2]) cout << "No" << endl;
//	else if (n[0] == n[1] && n[1] == n[2]) cout << "No" << endl;
//	else cout << "Yes" << endl;
//	return 0;
//}
