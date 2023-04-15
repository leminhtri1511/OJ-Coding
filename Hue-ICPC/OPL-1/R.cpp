#include <bits/stdc++.h>
using namespace std;
int n, a[10], i;
long long s;
int main()
{
	cin >> n;
	for (i = 1; i <= n; i++) cin >> a[i];
	s = 0;
	for (i = 1; i <= n; i++) s = s+pow(a[i]/10, a[i]%10);
	cout << s;
}