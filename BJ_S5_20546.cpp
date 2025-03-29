/*
https://www.acmicpc.net/problem/20546
*/
#include <iostream>
using namespace std;

int main()
{
    int money, price, a, b;
    int ac = 0;
    int bc = 0;
    int day[14];
    cin >> money;

    a = money;
    b = money;

    for(int i=0; i<14; i++) {
        cin >> price;
        day[i] = price;
        if(a >= price) {
            ac = ac + (a / price);
            a = a % price;
        } 

    }
    a = a + (price * ac);

    int upcount = 0;
    int downcount = 0;

    for (int i=1; i<14; i++) {
        if (downcount >= 2 && b >= day[i]) {
            bc = bc + (b / day[i]); 
            b = b % day[i];
        }
        if (upcount == 2) {
            if (ac == 0) {
                continue;
            }
            b = b + (day[i] * bc);
            bc = 0;
        }

        if(day[i-1] > day[i]) {
            downcount++;
            upcount = 0;
        } else if(day[i-1] < day[i]) {
            upcount++;
            downcount = 0;
        }
    }

    if(bc != 0) {
        b = b + (bc * price);
    }

    if(a > b) {
        cout << "BNP";
    } else if (a == b) {
        cout << "SAMESAME";
    } else {
        cout << "TIMING";
    }

    return 0;
}
