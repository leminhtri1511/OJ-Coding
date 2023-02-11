#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	long long n,a;
	int k;
	cin >> n;
	k = 0;
	do 
	{
	    if(n % 2 != 0) k++;
		n = n / 10;
	}
	while(n != 0);
	cout << k;
	return 0;
}
 
