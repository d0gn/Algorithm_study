#include <iostream>
using namespace std;


int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        int r = 1;
        cin >> a >> b;
        for (int j = 0; j < b; j++) {
            r = (r * a) % 10;
        }
        if (r == 0) {
            cout << 10 << endl;

        } else {
            cout << r << endl;
        }

    }
    return 0;
}
