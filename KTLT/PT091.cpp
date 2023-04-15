#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char s[200000];
    cin >> s;
    int a, z;
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == 'A')
        {
            a = i;
            break;
        }
    }
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        if(s[i] == 'Z')
        {
            z = i;
            break;
        } 
    }
    cout << z - a + 1;
    return 0;
}
