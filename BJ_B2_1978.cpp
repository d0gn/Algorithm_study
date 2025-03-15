/*
문제
주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.

입력
첫 줄에 수의 개수 N이 주어진다. N은 100이하이다. 다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.

출력
주어진 수들 중 소수의 개수를 출력한다.

생각
2와 3으로 안나눠지면 소수 아님? -> 도저히 모르겠음 방법 탐색
6k +- 1 소수 판별법 발견
i=5 부터 시작해서 6씩 증가시켜가며 값을 조사
i, i+2로 n이 나누어 떨어지는지 확인

*/

#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main()
{
    int n, number;
    int count = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> number;
        if(isPrime(number)) {
            count++;
        }
    }
    cout << count;

    return 0;
}