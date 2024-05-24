#include <iostream>

using namespace std;

int main(){
  /*
  int arr[6] = { 1,2,3,4,5,6};
  int *chr_ptr;

  chr_ptr = arr;

  cout << chr_ptr << "\n";
  cout << *chr_ptr << endl;
  cout << arr << endl;
  cout << arr+4 << endl;
  cout << &arr[3] << endl;
  cout << arr[4] << endl;

  cout << *(chr_ptr+3) << endl << endl;
  // 2-1 p.8
  int nArray[10];
  int* p = &nArray[0];

  for (int i = 0; i < 10; ++i){
    *(p+i) = i;
    cout << *(p+i) << endl;
    cout << p+i << endl;
  }
  */
  int ary[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
  int (*ap)[4];
  ap = &ary;
  cout << "ap[1]1[] = " << ap[1][1] << "\n";
}