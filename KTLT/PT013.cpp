#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n, count = 0;
	cin >> n;
	int a[n];
	for(int i = 1; i <= n; i++) 
	{
		cin >> a[i];
		if(a[i] % 3 == 0 || a[i] % 7 == 0) count ++;
	}
	cout << count;
	return 0;
}
