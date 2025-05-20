#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cal = 2;
    for (int i = 0; i < n; i++) {
        cal = (cal * 2) - 1;    
    }
    cout << cal * cal << endl;
    return 0;
}