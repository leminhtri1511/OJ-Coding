#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	int max, min = a[0];
	for(int i = 0; i < n; i++)
	{
		if(min > a[i]) min = a[i];
		else max = a[i];
	}
	cout << max - min;
	return 0;
}
