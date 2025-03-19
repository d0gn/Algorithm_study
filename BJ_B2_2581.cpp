/*
문제
자연수 M과 N이 주어질 때 M이상 N이하의 자연수 중 소수인 것을 모두 골라 이들 소수의 합과 최솟값을 찾는 프로그램을 작성하시오.
예를 들어 M=60, N=100인 경우 60이상 100이하의 자연수 중 소수는 61, 67, 71, 73, 79, 83, 89, 97 총 8개가 있으므로, 이들 소수의 합은 620이고, 최솟값은 61이 된다.

입력
입력의 첫째 줄에 M이, 둘째 줄에 N이 주어진다.
M과 N은 10,000이하의 자연수이며, M은 N보다 작거나 같다.

출력
M이상 N이하의 자연수 중 소수인 것을 모두 찾아 첫째 줄에 그 합을, 둘째 줄에 그 중 최솟값을 출력한다. 
단, M이상 N이하의 자연수 중 소수가 없을 경우는 첫째 줄에 -1을 출력한다.

생각
소수 판별을 이용한 함수 (6k +-1) 이걸 사용해서
M ~ N 까지 반복문을 실행하고 하나하나 조사해가면서
값이 가장 작은수는 min에 넣음과 동시에 total 값에 총합을 모으자
*/
#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n < 2) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    
    for(int i = 5; i * i <= n; i += 6){
        if (n % i == 0 || n % (i+2) ==0) return false;
    }
    return true;
}

int main()
{
    int M, N;
    int min = 0; 
    int total = 0;
    cin >> M >> N;
    for (int j=M; j <= N; j++){
        if (isPrime(j)) {
            total += j;
            if(min == 0) {
                min = j;
            }
        }
    }

    if (total == 0) {
        cout << -1;
    } else {
        cout << total << endl;
        cout << min;
    }

    return 0;
}