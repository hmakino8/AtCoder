//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <math.h>
#include <stdio.h>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	double a, b;
	cin >> a >> b;
	printf("%0.10f %0.10f\n", a/sqrt(a*a+b*b), b/sqrt(a*a+b*b));
}
