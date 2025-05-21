#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string s, a, b, c;
    double point = 0;
    double grade = 0;
    for(int i = 0; i< 20; i++) {
        getline(cin, s);
        stringstream ss(s);
        ss >> a >> b >> c;
        
        if(c == "A+") {
            point += stod(b) * 4.5; grade += stod(b);
        } else if(c == "A0") {
            point += stod(b) * 4.0; grade += stod(b);
        } else if(c == "B+") {
            point += stod(b) * 3.5; grade += stod(b);
        } else if(c == "B0") {
            point += stod(b) * 3.0; grade += stod(b);
        } else if(c == "C+") {
            point += stod(b) * 2.5; grade += stod(b);
        } else if(c == "C0") {
            point += stod(b) * 2.0; grade += stod(b);
        } else if(c == "D+") {
            point += stod(b) * 1.5; grade += stod(b);
        } else if(c == "D0") {
            point += stod(b) * 1.0; grade += stod(b);
        } else if(c == "F") {
            point += 0; grade += stod(b);
        } else {
            continue;
        }
        
    }
    cout << fixed;
    cout.precision(6);
    cout << point / grade << endl;

    return 0;

}