#include<iostream>
//#include<bits/stdc++.h>
//#include<math.h>
using namespace std;
int main()
{
	long a, b;
	cin >> a >> b;
	if((a * b) % 2 == 0) cout << "Even";
	else cout << "Odd";
	return 0;
}
