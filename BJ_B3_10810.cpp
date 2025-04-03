/*
https://www.acmicpc.net/problem/10810
*/

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int* a = new int[n];
    for (int b = 0; b < n; b++) {
        a[b] = 0;
    }

    int i, j, k;
    for (int t = 0; t < m; t++) {
        cin >> i >> j >> k;
        for (i; i <= j; i++) {
            a[i-1] = k;
        }
    }
    for (int o = 0; o < n; o++) {
        cout << a[o] << " ";
    }

    return 0;
}