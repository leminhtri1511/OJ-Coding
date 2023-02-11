#include<iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    long long a[n], max;
    max = a[0];
    for (int i = 1; i <= n; i++)
    {
    	cin >> a[i];
    	if (max < a[i])
            max = a[i];
	}
	for (int i = 1; i <= n; i++)
	{
		if (max == a[i])
		    count ++;
	}    
	cout << max << " " << count;
    return 0;
}
