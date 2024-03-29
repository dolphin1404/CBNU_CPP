#include <iostream>
using namespace std;

template <class T>
// 제네릭 함수 add()
T add(T arr[], int len){
  T sum = 0;
  for (int i = 0; i < len; i++){
    sum += arr[i];
  }
  return sum;
}

int main(){
  int x[] = {1,2,3,4,5};
  double d[] = {1.2, 2.3, 3.4, 4.5, 5.6, 6.7};
cout << "sum of x[] = " << add(x, sizeof(x) / sizeof(x[0])) << endl; // 배열 x와 원소 5개의 합을 계산
cout << "sum of d[] = " << add(d,  sizeof(d) / sizeof(d[0])) << endl; // 배열 d와 원소 6개의 합을 계산
}