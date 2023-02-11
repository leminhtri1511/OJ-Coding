//Mua go
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a[7];
		for (int i = 0; i < 7; i++)
		{
			cin >> a[i];
		}
		sort(a, a + 7);
		int ans[3];
		ans[0] = a[0];
		ans[1] = a[1];
		ans[2] = a[6] - a[0] - a[1];
		sort(ans, ans + 3);
		cout << ans[0] << " " << ans[1] << " " << ans[2] << "\n";
	}
	return 0;
}