#include <iostream>
#include <string>

using namespace std;

// 비밀번호 발음하기
/*
모음(a,e,i,o,u) 하나를 반드시 포함하여야 한다.
word 에서 vowel 리스트의 단어가 있는지 검사 없으면 not

모음이 3개 혹은 자음이 3개 연속으로 오면 안 된다.
count 를 사용해서 자음이나 모음이 연속해서 나오면 카운트 증가 달라지면 초기화 

같은 글자가 연속적으로 두번 오면 안되나, ee 와 oo는 허용한다.
현재 인덱스 앞뒤로 글자가 같을경우 not 하지만 ee와 oo는 괜찮다.
 */
bool isVowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

bool isAcceptable(const string &word) {
    bool hasVowel = false;
    int vowelCount = 0, consonantCount = 0;

    for (size_t i = 0; i < word.length(); i++) {
        char ch = word[i];

        // (1) 모음이 하나라도 포함되어야 함
        if (isVowel(ch)) {
            hasVowel = true;
            vowelCount++;
            consonantCount = 0;  // 자음 카운트 초기화
        } else {
            consonantCount++;
            vowelCount = 0;  // 모음 카운트 초기화
        }

        // (2) 모음 3개 or 자음 3개 연속 오면 안 됨
        if (vowelCount == 3 || consonantCount == 3) {
            return false;
        }

        // (3) 같은 글자가 연속 두 번 오면 안 됨 (예외: "ee", "oo")
        if (i > 0 && word[i] == word[i - 1] && !(word[i] == 'e' || word[i] == 'o')) {
            return false;
        }
    }

    return hasVowel;
}

int main() {
    string word;
    
    while (true) {
        cin >> word;
        if (word == "end") break;

        if (isAcceptable(word)) {
            cout << "<" << word << "> is acceptable." << endl;
        } else {
            cout << "<" << word << "> is not acceptable." << endl;
        }
    }

    return 0;
}
