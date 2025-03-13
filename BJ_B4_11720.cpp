/* 
 문제
N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오. 
 
 입력
첫째 줄에 숫자의 개수 N (1 ≤ N ≤ 100)이 주어진다. 둘째 줄에 숫자 N개가 공백없이 주어진다.

 풀이
index를 만들고 index의 최대값은 N 
0부터 N까지 증가시키며
두번째 줄의 숫자의 하나씩 인덱스로 접근하여 그 값을 더한다.
++
자리마다 인덱스로 접근하려면 string으로 변환하여 한자리씩 접근해야함.
+++
2번째 숫자는 문자열임
*/
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int N;
    string M;
    int SUM = 0;

    cin >> N;
    cin >> M;

    for (int i = 0; i < N; i++){
        SUM += M[i] - '0';
    }
    cout << SUM;

    return 0;
}