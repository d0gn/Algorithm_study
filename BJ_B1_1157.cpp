/*
문제
https://www.acmicpc.net/problem/1157
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string s;
	int alp[26] = { 0 };
	int cnt = 0;

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] < 97) alp[s[i] - 65]++;
		else alp[s[i] - 97]++;
	}

	int m = 0, m_i = 0;
	for (int i = 0; i < 26; i++) {
		if (m < alp[i]) {
			m = alp[i];
			m_i = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (m == alp[i]) cnt++;
	}

	if (cnt > 1) {
		cout << "?";
	}
	else {
		cout << (char)(m_i + 65);
	}

	return 0;
}