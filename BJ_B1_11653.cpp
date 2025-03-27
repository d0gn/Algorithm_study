/*
https://www.acmicpc.net/problem/11653
*/
#include <iostream>
using namespace std;


int main()
{
    int n;
    int i = 0;
    int t = 0;

    cin >> n;

    while (true)
    {
        if (n == 1) break;
        if (n % 2 == 0) {
            i++;
            n /= 2;
            cout << 2 << endl;
        } else {
            break;
        }
    }

    while (true)
    {
        if (n == 1) break;
        if (n % 3 == 0) {
            t++;
            n /= 3;
            cout << 3 << endl;
        } else {
            break;
        }
    }
    
    for (int j = 5; j * j <= n; j += 6) {
        while (n % j == 0) {
            cout << j << endl;
            n /= j;
        }
        while (n % (j + 2) == 0) {
            cout << (j + 2) << endl;
            n /= (j + 2);
        }
    }
    
    if (n > 1) cout << n << endl;
    
}