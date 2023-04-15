#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	if(a == b && b == c && a == c) cout << "Tam giac deu";
	else
	{
		
		if(a == b || a == c || b == c) cout << "Tam giac can";
		else cout << "Tam giac thuong";
	}
	return 0;
}
