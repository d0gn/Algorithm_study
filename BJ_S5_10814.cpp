/*https://www.acmicpc.net/problem/10814*/

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class Person {
public:
	int age;
	string name;
};

Person P[100000];

bool compare(Person a, Person b) {
	return a.age < b.age;
}

int main() {
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> P[i].age;
		cin >> P[i].name;
	}
	stable_sort(P, P + n, compare);
	for (int i = 0; i < n; i++) {
		cout << P[i].age << " " << P[i].name << "\n";
	}

	return 0;
}