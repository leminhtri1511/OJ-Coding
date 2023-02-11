#include<iostream>
using namespace std;
int sum(int n)
{
	int temp = 0;
	while(n > 0)
	{
		temp += n%10;
		n /= 10;
	}
	return temp;
}

int main()
{
	int n, count = 0;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		if(sum(i)%10 == 9) count++;
	}
	cout << count;
	return 0;
}
