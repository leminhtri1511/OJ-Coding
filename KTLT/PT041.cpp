#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long a[n];
	a[0] = 2;
	a[1] = 1;
	for(int i = 2; i <= n; i++)
	{
		a[i] = a[i-1] + a[i-2];
	    a[n] = a[n-1] + a[n-2];
	}
	for(int i = 0; i <= n; i++)
	cout << a[i] << " ";
	return 0;
}
