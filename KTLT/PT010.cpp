#include<iostream>
#include<math.h>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	float a1, b1, c1, a2, b2, c2;
	float dx, dy, d;
	int T;
	cin>>T;
	while (T--)
	{
		cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
		d = a1*b2 - a2*b1;
		dx = c1*b2 - c2*b1;
		dy = a1*c2 - a2*c1;
		if(d == 0)
		{
			if(dx - dy == 0) cout << "Many solutions" << endl;
			else cout << "No solution" << endl;
		}
		else
		{
			cout << fixed << setprecision(6) << dx / d << " ";
			cout << fixed << setprecision(6) << dy / d << endl;
		}
    }
	return 0;
}
