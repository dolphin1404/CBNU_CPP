#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Test{
  protected:
    int x;
  public:
    static int sharedMoeny;
    Test() { x = 0;}
    //Test(const Test& t){x = t.GetData();}
    int GetData() { return x;}
};

//int Test::sharedMoeny = 10;

class Sample {
  static int a;
  static int getA(){return a;}
  public:
  int b;
  int getB(){return b;}
  int f(){return getA();}
  //static int g() { return getB();}
};

class Point{
  int m_x, m_y;
  public:
  Point(int x, int y = 0);
  private:
  int Point1();
};

Point::Point(int x, int y){
  m_x = x;
  m_y = y;
}

int Point::Point1(){
  return 0;
}

int main(){
  const Test object;
  //cout << object.GetData();

  Point pt[2] = {Point(2), Point(3,4)};
  //Point *p = new Point[3];
  int M[3][3];
  cout << *M << endl;
  cout << *(M+1) << endl;
  cout << **(M+1) << endl;
  cout << (M[1] + 1) << endl;

  string s1;
  string s2 = "123";
  string s3 = "abcdefg";

  cout << "s1 = " << s1.size() << "\n";
  cout << "s2 = " << s2.size() << "\n";
  cout << "s3 = " << s3.size() << "\n";
  cout << s2;

  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(100);
  cout << v.size() << endl;
  cout << v.capacity() << endl;
}