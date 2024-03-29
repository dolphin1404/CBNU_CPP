#include <iostream>

using namespace std;

template <class T>

void reverseArray(T x[], int num){
  T* tmp = new T[num];

  for(int i = 0; i < num; i++){
    tmp[num - i-1]=x[i];
  }
  for(int i = 0; i < num; i++){
    x[i] = tmp[i];
  }
  delete[] tmp;
}

int main() {
  int x[] = {1, 10, 100, 5, 4};
  reverseArray(x, 5);
  for (int i = 0; i < 5; i++) cout << x[i] << ' ';  // 4 5 100 10 1 이 출력된다.
  cout << endl;
}