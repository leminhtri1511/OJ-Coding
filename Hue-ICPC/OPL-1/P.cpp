#include <iostream>
using namespace std;

int mark[10];

void initMark() {
    for (int i = 0; i < 10; i++) {
        mark[i] = 0;
    }
}

int minAi(int n) {
    int count = 0;
    int i = 0;
    int element;
    int digit;
    while (count < 10) 
    {
        i++;
        element = i * n;
        while (element != 0) {
            digit = element % 10;
            if (mark[digit] == 0) {
                count++;
                mark[digit] = 1;
            }
            element /= 10;
        }
    }
    
    return i * n;
}

int main() 
{
    int numOfTestCase;
    int testCase[1000000];

    cin >> numOfTestCase;
    initMark();

    for (int i = 0; i < numOfTestCase; i++) {
        cin >> testCase[i];
    }
    for (int i = 0; i < numOfTestCase; i++) 
    {
        if (!testCase[i]) {
            cout << "Awake!" << endl;
            continue;
        }
        else {
            cout << minAi(testCase[i]) << endl;
            initMark();
        }
        
    }
    return 0;
}