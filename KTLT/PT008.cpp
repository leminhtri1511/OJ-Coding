#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	float a, b, c;
	float x1, x2, x3, delta;
	do
	{
		cin >> a >> b >> c;
	}
	while(a == 0);
	delta = b*b - 4*a*c;
	x1 = ( -b + sqrt(delta) ) / (2*a);
	x2 = ( -b - sqrt(delta) ) / (2*a);
	x3 = -b / (2*a);
	if(delta < 0) cout << "No solution";
	else
	{
		if (delta > 0)
		{
			cout << fixed << setprecision(4) << x1 << endl;
			cout << fixed << setprecision(4) << x2;
		}
		else cout << fixed << setprecision(4) << x3;
	}
	return 0;
}
