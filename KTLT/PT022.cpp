#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int  n;
	cin >> n;
	int a[n];	
	for(int i = 1; i <= n; i++) 
	{
		cin >> a[i];
		if(a[i] % 400 == 0 || a[i] % 4 == 0 && a[i] % 100 != 0) cout << "leap year\n";
		else cout << "none\n";
	}
	return 0;
}
