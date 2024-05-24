#include <iostream>
#include <string>

using namespace std;

class BaseArray {
 private:
  int capacity;  // 동적 할당된 메모리 용량
  int *mem;      // 정수 배열을 만들기 위한 메모리 포인터

 protected:
  BaseArray(int capacity = 100) {
    this->capacity = capacity;
    mem = new int[capacity];
  }
  ~BaseArray() { delete[] mem; }
  void put(int index, int val) { mem[index] = val; }
  int get(int index) const { return mem[index]; }
  int getCapacity() const { return capacity; }
};

class MyQueue : public BaseArray {
 private:
  int front;  
  int rear;   
  int size;   

 public:
  MyQueue(int capacity) : BaseArray(capacity), front(0), rear(0), size(0) {}

  void enqueue(int val) {
    if (size == getCapacity()) {
      cout << "Queue is full!" << endl;
      return;
    }
    put(rear, val);
    rear = (rear + 1) % getCapacity();
    size++;
  }

  int dequeue() {
    if (size == 0) {
      cout << "Queue is empty!" << endl;
      return -1;
    }
    int val = get(front);
    front = (front + 1) % getCapacity();
    size--;
    return val;
  }

  int length() const { return size; }

  int capacity() const { return getCapacity(); }
};

int main() {
  MyQueue mQ(100);
  int n;

  cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
  for (int i = 0; i < 5; i++) {
    cin >> n;
    mQ.enqueue(n); 
  }

  cout << "큐의 용량 : " << mQ.capacity() << ", 큐의 크기 : " << mQ.length()
       << endl;

  cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
  while (mQ.length() != 0) {
    cout << mQ.dequeue() << ' ';  
  }

  cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;

  return 0;
}
