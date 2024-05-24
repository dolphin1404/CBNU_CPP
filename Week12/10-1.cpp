#include <iostream>

using namespace std;

class Circle {
 public:
  int r;
};

class NamedCircle : public Circle {
 public:
  string name;
  NamedCircle(int a, string n) {
    this->r = a;
    this->name = n;
  }
  void show() { cout << "반지름이 " << r << "인 " << name; }
};

int main() {
  NamedCircle waffle(3, "waffle");  // 반지름이 3이고 이름이 waffle인 원
  waffle.show();
}