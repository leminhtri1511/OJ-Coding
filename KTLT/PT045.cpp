#include <iostream>
#include <math.h>
using namespace std;
bool ktra(int n)
{
    int A = sqrt(n);
    return pow(A,2) == n;
}
int main()
{
	int MIN;
    int n; 
    cin >> n;
    int a[n];
    for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
        if( ktra(a[i]) )
		{
            MIN = a[i];
            if(MIN > a[i]) 
			MIN = a[i];
        }
    }
	cout << MIN;
	return 0;
}
