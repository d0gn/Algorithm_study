/*
https://www.acmicpc.net/problem/5618

생각
숫자 n개를 받으면 그중 작은 수를 선택해서 그떄까지 반복문을 실시하고,
공통으로 나누어 떨어지는 수가 있다면 공약수로 넣는다
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int M[3];

    cin >> n;
    
    for (int i=0; i<n; i++) {
        cin >> M[i];
    }
    
    int min = *min_element(M, M + n);

    if (n == 2) {
        for (int j=1; j<=min; j++) {
            if (M[0] % j == 0 && M[1] % j == 0) {
                cout << j << "\n";
            }
        }
    }
    if (n == 3) {
        for (int j=1; j<=min; j++) {
            if (M[0] % j == 0 && M[1] % j == 0 && M[2] % j == 0) {
                cout << j << "\n";
            }
        }
    }
    
    
    return 0;

}