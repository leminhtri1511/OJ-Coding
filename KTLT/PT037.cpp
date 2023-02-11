#include<iostream>
using namespace std;

int findMIN(long long a[], int n)
{
    int min = a[0];
    for (long long i = 0; i < n; i++)
    {
    	if (min < a[i])
            min = a[i];
	}
    return min;
}

int main()
{
    int n;
    cin >> n;
    long long a[n], min = a[0];
    for(long long i = 0; i < n; i++)
    {
    	cin >> a[i];
	}
	findMIN(a, n);
	cout << min;
    return 0;
}
