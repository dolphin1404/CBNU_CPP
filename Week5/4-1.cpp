#include <iostream>
#include <string>

using namespace std;

int main() {
  const int SIZE = 5;
  string strings[SIZE];

  // Input strings
  for (int i = 0; i < SIZE; i++) {
    cout << "이름 >> ";
    getline(cin, strings[i]);
  }

  string largestString = strings[0];
  for (int i = 1; i < SIZE; i++) {
    if (strings[i] > largestString) {
      largestString = strings[i];
    }
  }

  cout << "사전에서 가장 뒤에 나오는 문자열은 " << largestString << endl;

  return 0;
}