/*
https://www.acmicpc.net/problem/1110
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n, s, a, b;
    int r;
    int count = 0;

    cin >> n;

    if (n.length() == 1) {
        n = "0" + n;
    }

    string original = n;

    do {
        
        r = (n[0] - '0') + (n[1] - '0');
        s = to_string(r);

        
        if (s.length() == 1) {
            b = string(1, n[1]) + s;
        } else {
            b = string(1, n[1]) + string(1, s[1]);
        }

        n = b;
        count++;

    } while (n != original);

    cout << count;

    return 0;
}
