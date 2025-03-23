/*
https://www.acmicpc.net/problem/2745
*/
#include <iostream>
using namespace std;

int main()
{
    int b;
    int res = 0;
    string n;
    cin >> n >> b;

    for(int i = 0; i < n.length(); i++) {
        if('0' <= n[i] && n[i] <= '9') { 
            res = res * b + (n[i] - '0'); 
        } else { 
            res = res * b + (n[i] - 'A' + 10);
        }
    }

    cout << res;

    return 0;

}