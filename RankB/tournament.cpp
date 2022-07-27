//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<vector<char> > a(N, vector<char>(N));
	rep(i, N)rep(j, N) cin >> a[i][j];

	rep(i, N)rep(j, N) {
		if (a[i][j] == '-')
			continue ;
		if (a[i][j] == 'W')
		{
			if (a[j][i] == 'L')
				continue ;
			else
			{
				cout << "incorrect" << endl;
				return (0);
			}
		}
		if (a[i][j] == 'L')
		{
			if (a[j][i] == 'W')
				continue ;
			else
			{
				cout << "incorrect" << endl;
				return (0);
			}
		}
		if (a[i][j] == 'D')
		{
			if (a[j][i] == 'D')
				continue ;
			else
			{
				cout << "incorrect" << endl;
				return (0);
			}
		}
	}
	cout << "correct" << endl;
}
