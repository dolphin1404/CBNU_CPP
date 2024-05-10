#include <iostream>

using namespace std;

class Circle {
 private:
  int radius;

 public:
  Circle() { radius = 1; }
  Circle(int radius) { this->radius = radius; }
  double getArea() { return 3.14 * radius * radius; }
};

void swap(Circle& c1, Circle& c2) {
  Circle temp = c1;
  c1 = c2;
  c2 = temp;
}

int main() {
  Circle c1(2);
  Circle c2(3);

  cout << "A의 면적 =  " << c1.getArea()
            << "\t B의 면적 =" << c2.getArea() << endl;

  swap(c1, c2);

  cout << "A의 면적 =  " << c1.getArea()
            << "\t B의 면적 =" << c2.getArea() << endl;

  return 0;
}