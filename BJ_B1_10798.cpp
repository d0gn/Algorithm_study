/*
이제부터 문제가 너무 길어서 주소로 대체
https://www.acmicpc.net/problem/10798
*/

#include<iostream>

using namespace std;

string arr1[15][15];

int main() {
	string s;
	for (int i = 0; i < 5; i++) {
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			arr1[i][j] = s[j];
		}
	}
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			cout << arr1[j][i];
		}
	}

	return 0;
}