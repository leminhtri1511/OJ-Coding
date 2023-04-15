#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	double a, b, c, p, s;
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	s = sqrt( p*(p - a)*(p - b)*(p - c) );
	if(a + b > c && b + c > a && a + c > b)
	cout << fixed << setprecision(6) << s;
	else cout << "No solution";
	return 0;
}
