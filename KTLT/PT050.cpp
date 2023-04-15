#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float avg, sum = 0;
    long long a[n];
//    for(int i = 0; i < n; i++) 
    for(long long i = 0; i < n; i++)
    {
    	cin >> a[i];
    	sum += a[i];
	}
	avg = sum / n;
	cout << fixed << setprecision(4) << avg;
	return 0;
}
