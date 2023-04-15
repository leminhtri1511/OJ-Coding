#include <bits/stdc++.h>
using namespace std;
int t, n[20], k, i;
int main()
{
	cin >> t;
	for (i = 1;i <= t;i++) cin >> n[i];
	for (i = 1;i <= t;i++)
	{
		while (n[i] != 0)
		{
			k = sqrt(n[i]);
			cout << k*k;
			n[i] = n[i] - k*k;
			if (n != 0) cout << " ";
		}
		if (i != t) cout << endl;
	}
}