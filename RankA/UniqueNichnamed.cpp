//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<vector<string> > name(n, vector<string>(2));
	rep(i, n) {
		cin >> name[i][0];
		cin >> name[i][1];
		if (name[i][0] == name[i][1]) {
			cout << "No" << endl;
			return 0;
		}
	}
	rep(i, n) {
		int cnt1=0, cnt2=0;
		rep2(j, i+1, n) {
			if (name[i][0] == name[j][0]) cnt1 = 1;
			if (name[i][0] == name[j][1]) cnt1 = 1;
			if (name[i][1] == name[j][0]) cnt2 = 1;
			if (name[i][1] == name[j][1]) cnt2 = 1;
			cout << "cnt1 = " << cnt1 << ' ' << "cnt2 = " << cnt2 << endl;
		}
		if (cnt1 && cnt2) {
			//cout << "No" << endl;
			return 0;
		}
	}
	//cout << "Yes" << endl;
}
