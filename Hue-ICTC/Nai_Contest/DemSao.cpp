#include <bits/stdc++.h>
using namespace std;

int main () 
{
	cin.tie(0) -> sync_with_stdio(0);
	cout.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while (t--) 
    {
		long long a, b, c;
		cin >> a >> b;
		a--;
		a = (a/4) + (a/400) - (a/100);
		b = (b/4) + (b/400) - (b/100);
		cout << b - a << endl;
	}
	return 0;
}