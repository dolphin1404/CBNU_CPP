#include <iostream>

#include "adder.h"


using namespace std;

class Calculator {  // 계산기 클래스
 public:
  void run();
};
void Calculator::run() {
  cout << "Input your 2 integer>>";
  int a, b;
  cin >> a >> b;            // 정수 두 개 입력
  Adder adder(a, b);        // 덧셈기 생성
  cout << adder.process();  // 덧셈 계산
}
int main() {
  Calculator calc;  // calc 객체 생성
  calc.run();       // 계산기 시작
}