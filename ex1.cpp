#include <iostream>

using namespace std;

int main(){
  int M[4][2] = { {1,2}, {3,4}, {5,6}};
  int(*ptr)[2];
  int *p;
  int **pt;

  cout << M + 1 << endl;
  cout << M[2] << endl;
  cout << (M+1) << endl;
  cout << M[3] + 1 << endl;

  ptr = M;
  cout << "<first>===========" << endl;
  cout << ptr << endl;
  cout << *ptr << endl;
  cout << ptr+3 << endl;
  cout << **(ptr+2) << endl;

  p = M[0];
  p = p+5;
  pt = &p;
  cout << "<second compute>" << endl;
  cout << *pt << endl;
  cout << **pt << endl;
}