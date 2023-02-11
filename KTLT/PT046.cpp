#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) 
	{
		cin >> a[i];
	    if(a[i] >= 5 && a[i] <= 7)
	    cout << a[i] << " ";
	}
	return 0;
}
