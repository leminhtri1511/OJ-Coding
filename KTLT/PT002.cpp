#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	double x1, y1, x2, y2, math;
	cin >> x1 >> y1 >> x2 >> y2;
	math = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	cout << fixed << setprecision(4) << math;
	return 0;
}
