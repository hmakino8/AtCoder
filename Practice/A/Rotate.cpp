//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <stdio.h>
#include <string>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	string s;
	cin >> s;
	int abc = stoi(s);
	int bca = (s[1]-'0')*100 + (s[2]-'0')*10 + (s[0]-'0');
	int cab = (s[2]-'0')*100 + (s[0]-'0')*10 + (s[1]-'0');
	cout << abc+bca+cab << endl;
}
