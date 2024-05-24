#include <iostream>
#include <string>


using namespace std;

class Circle {
 public:
  int r;
};

class NamedCircle : public Circle {
 public:
  string name;
  NamedCircle(){};
  NamedCircle(int a, string n) {
    this->r = a;
    this->name = n;
  }
  void show() { cout << "반지름이 " << r << "인 " << name; }
};

int main() {
  int a, max = 0, idxmax = 0;
  string n;
  NamedCircle pizza[5];
  cout << "5개의 정수 반지름과 원의 이름을 입력하세요.\n";
  for (int i = 0; i < 5; i++) {
    cout << i + 1 << " >> ";
    cin >> a;
    cin.ignore();
    getline(cin, n);
    
      pizza[i] = NamedCircle(a, n);
    if (max < a) {
      max = a;
      idxmax = i;
    }
  }
  cout << "가장 면적이 큰 피자는 " << pizza[idxmax].name << "입니다.";
}