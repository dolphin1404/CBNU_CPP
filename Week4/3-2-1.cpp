#include <iostream>

using namespace std;

//int big(int a, int b, int def = 100);

int big(int a, int b){
  int bigger;
  if(a>b) bigger = a;
  else bigger =b;

  if(bigger < 100) return bigger;
  else return 100;
  
}

int big(int a, int b, int def) {
  int bigger;
  
  if(a > b) bigger = a;
  else bigger = b;
  
  if(bigger < def){
    return bigger;
  }
  else return def;
}

int main() {
  int x = big(3, 5);  // 3과 5중 큰 값 5는 최대값 100보다 작으므로, 5 리턴
  int y =
      big(300, 60);  // 300과 60중 큰 값 300이 최대값 100보다 크므로, 100 리턴
  int z =
      big(30, 60, 50);  // 30과 60 중 큰 값 60이 최대값 50보다 크므로, 50 리턴
  cout << x << ' ' << y << ' ' << z << endl;
}