/*
https://www.acmicpc.net/problem/2609
*/
#include <iostream>
using namespace std;

int main()
{
    int a, b, c = 1;
    int d;

    cin >> a >> b;

    int min = (a < b) ? a : b;

    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            c = i;
        }
    }
    cout << c << '\n';

    cout << (a * b) / c;

    return 0;
}