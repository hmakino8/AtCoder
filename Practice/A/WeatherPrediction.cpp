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
	string s;
	cin>>s;
	if (s == "Sunny") cout << "Cloudy" << endl;
	if (s == "Cloudy") cout << "Rainy" << endl;
	if (s == "Rainy") cout << "Sunny" << endl;
}
