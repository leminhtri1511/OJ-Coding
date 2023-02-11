#include <iostream>
using namespace std;
void soHai(int n)
{
    int soMuoi[1000];
    int i = 0;
    while (n > 0)
	{
        soMuoi[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << soMuoi[j];
}
int main()
{
    int n;
    cin >> n;
    soHai(n);
    return 0;
}
