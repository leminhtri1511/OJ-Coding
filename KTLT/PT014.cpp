#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long tong = 1;
	if(n % 2 == 0)
	{
		for(int i = 2; i <= n; i += 2)
		tong *= i;
	}
	else
	{
		for(int i = 3; i <= n; i += 2)
		tong *= i;
	}
	cout<<tong;
}
