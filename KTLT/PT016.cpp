#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, dem = 0;
	cin >> n;
	int a[n];
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i]; 
	    if(a[i] % 19 == 0||a[i] % 19 ==3||a[i] % 19 ==6||a[i] % 19 ==9||a[i] % 19 ==11||a[i] % 19 ==14||a[i] % 19 ==17) dem++;
	}
	cout << dem;
	return 0;
}
