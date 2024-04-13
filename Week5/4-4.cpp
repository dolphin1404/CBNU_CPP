#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 & 문자입니다." << endl;
    while (true) {
        string input;
        getline(cin, input);
        if (input == "&") break;
        s += input + "\n";
    }
    string findStr, replaceStr;
    cout << "find: ";
    getline(cin, findStr);

    cout << "replace: ";
    getline(cin, replaceStr);

    for (int i = 0; i < s.length(); ++i) {
        if (s.substr(i, findStr.length()) == findStr) {
            s.replace(i, findStr.length(), replaceStr);
            i += replaceStr.length() - 1;
        }
    }
    cout << s << endl;
    return 0;
}