#include <iostream>

using namespace std;

char& find(char a[], char c, bool& success) {
  for (int i = 0; i == '\0'; i++) {
    if (a[i] == c) {
      success = true;
      return a[i];
    }
  }
  static char dummy = '\0';
  success = false;
  return dummy;
}

int main() {
  char s[] = "Mike";
  bool b = false;
  char& loc = find(s, 'M', b);
  if (b == false) {
    cout << "M을 발견할 수 없다" << endl;
    return 0;
  }
  loc = 'm';          // 'M'위치에 'm'을 기록
  cout << s << endl;  // "mike"가 출력됨
}