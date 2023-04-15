#include<iostream>
#include<math.h>
#include<iomanip>
#define PI 3.14159
using namespace std;
int main()
{
	float a, b, A, s;
	cin >> a >> b >> A;
	s = ( a * b * sin(A * (PI / 180)) )/ 2;
	cout << fixed << setprecision(4) << s;
	return 0;
}
