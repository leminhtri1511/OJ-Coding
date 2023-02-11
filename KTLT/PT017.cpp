#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	unsigned short a, b, n, sum = 0;
	cin >> n;
	cin >> a >> b;
	for(int i = 1; i <= n; i++)
	{
		if( (i%10 + i/10) >= a && (i%10 + i/10) <= b)
		sum += i;
	}
	cout << sum;
	return 0;
}
