#include <stdio.h> 
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
    char str[500];
    int i = 0, j, sum = 0, n;
    gets(str);
    while(i <= strlen(str) - 1)
    if(str[i] <= '9' && str[i] >= '0')
    {
        j = i;
        n = 0;
        while(j <= strlen(str) - 1 && (str[j] <= '9' && str[j] >= '0') )
        {
            n = 10*n + (int)str[j] - 48;
            j ++;
        }
        sum += n;
        i = j;
    }
    else i++;
    cout << sum;
    return 0;
}
