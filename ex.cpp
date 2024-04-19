#include <iostream>

using namespace std;

int data = 100;
void Func(){
  cout << "FF\n";
}

namespace X{
  int data = 200;
  void Func(){
    cout <<"X::Func 호출\n";
  }
}
int main(){
  //using namespace X;

  int data = 300;

  cout << "data = " << ::data << "\n";
  ::Func();
  X::Func();
}