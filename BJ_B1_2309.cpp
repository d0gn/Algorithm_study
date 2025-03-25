/*
https://www.acmicpc.net/problem/2309
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n[9];
    int total = 0;
    int fake1, fake2;
    for (int i=0; i<9; i++) {
        cin >> n[i];
        total += n[i];
    }

    sort(n, n + 9);

    int h = total - 100;
    for (int j=0; j<9; j++){
        for(int k=0; k<9; k++){
            if (j == k) {
                continue;
            }
            if(n[j] + n[k] == h) {
                fake1 = j;
                fake2 = k;
                break;
            }

        }
        
    }

    for (int o = 0; o < 9; o++) {
        if (o == fake1 || o == fake2) {
            continue;
        }
        cout << n[o] << endl;
    }

    return 0;
}