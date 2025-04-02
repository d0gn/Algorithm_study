/*
https://www.acmicpc.net/problem/5347
*/
#include <iostream>
using namespace std;

long long gcd(long long a, long long b){
    while(b != 0){
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    long long a, b;
    int n;
    cin >> n;

    for (int i = 0; i<n; i++) {
        cin >> a >> b;
        long long g = gcd(a, b);
        cout << (a / g) * b << endl;

    }

    return 0;
}