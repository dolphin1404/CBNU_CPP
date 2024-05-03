#include <iostream>

using namespace std;

class Circle {
  int radius;
  public:
    static int cnt;
    void setRadius(int radius);
    double getArea();
};

void Circle::setRadius(int radius){
  this->radius = radius;
}

double Circle::getArea(){
  double area = 3.14 * radius * radius;
  if(area > 100) Circle::cnt++;
  return area;
}

int Circle::cnt = 0;

int main(){
  Circle c1, c2, c3;
  int r1, r2, r3;
  cout << "원 1의 반지름 >> ";
  cin >> r1;
  cout << "원 2의 반지름 >> ";
  cin >> r2;
  cout << "원 3의 반지름 >> ";
  cin >> r3;
  c1.setRadius(r1);
  c2.setRadius(r2); 
  c3.setRadius(r3);
  c1.getArea();
  c2.getArea();
  c3.getArea();
  cout << "면적이 100보다 큰 원 " << Circle::cnt << "개 입니다." << endl;
}