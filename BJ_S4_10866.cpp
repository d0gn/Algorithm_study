#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<int> deque;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string command;
        cin >> command;
        if (command == "push_front") {
            int x;
            cin >> x;
            deque.insert(deque.begin(), x);
        } else if (command == "push_back") {
            int x;
            cin >> x;
            deque.push_back(x);
        } else if (command == "pop_front") {
            if (!deque.empty()) {
                cout << deque.front() << endl;
                deque.erase(deque.begin());
            } else {
                cout << -1 << endl;
            }
        } else if (command == "pop_back") {
            if (!deque.empty()) {
                cout << deque.back() << endl;
                deque.pop_back();
            } else {
                cout << -1 << endl;
            }
        } else if (command == "size") {
            cout << deque.size() << endl;
        } else if (command == "empty") {
            cout << (deque.empty() ? 1 : 0) << endl;
        } else if (command == "front") {
            if (!deque.empty()) {
                cout << deque.front() << endl;
            } else {
                cout << -1 << endl;
            }
        } else if (command == "back") {
            if (!deque.empty()) {
                cout << deque.back() << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}   