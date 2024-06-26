#include <iostream>
using namespace std;

bool average(int a[], int size, int& avg) {
  if (size <= 0) return false;

  int sum = 0;  // 합계를 저장할 변수
  for (int i = 0; i < size; ++i) {
    sum += a[i];
  }
  avg = sum / size;
  return true;
}

int main() {
  int x[] = {0, 1, 2, 3, 4, 5};
  int avg;
  if (average(x, sizeof(x) / sizeof(x[0]), avg))  // 올바른 인자들을 전달
    cout << "평균은 " << avg << endl;
  else
    cout << "매개 변수 오류" << endl;

  int y[] = {};            // 빈 배열
  if (average(y, 0, avg))  // 빈 배열을 전달
    cout << "평균은 " << avg << endl;
  else
    cout << "매개 변수 오류 " << endl;
}
