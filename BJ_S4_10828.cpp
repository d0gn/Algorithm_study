#include<iostream>
#include<string>
#include<stack>

using namespace std;

int arr[10000];

int main() {
	int n;
	cin >> n;
	
	stack<int> st;
	string s;

	for (int i = 0; i < n; i++) {
		cin >> s;

		if (s == "push") {
			int m;
			cin >> m;
			st.push(m);
		}
		if (s == "pop") {
			if (!st.empty()) {
				cout << st.top() << endl;
				st.pop();
			}
			else {
				cout << "-1"  << endl;
			}
		}
		if (s == "size") {
			cout << st.size() << endl;
		}
		if (s == "empty") {
			if (st.empty()) {
				cout << "1" << endl;
			}
			else {
				cout << "0" << endl;
			}
		}
		if (s == "top") {
			if (!st.empty()) {
				cout << st.top() << endl;
			}
			else {
				cout << "-1" << endl;
			}
		}
	}

	return 0;
}