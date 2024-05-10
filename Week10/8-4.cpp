#include <iostream>
#include <cstring>

using namespace std;

class Book {
  char* title;  // 제목 문자열
  int price;    // 가격
 public:
  Book(const char* title, int price);
  Book(const Book& other);  // 복사 생성자 (깊은 복사
  ~Book();
  void set(const char* title, int price);
  void show() { cout << title << ' ' << price << "원" << endl; }
};

Book::Book(const char* title, int price) {
  this->title = new char[strlen(title) + 1];
  strcpy(this->title, title);
  this->price = price;
}
Book::Book(const Book& other) {
  this->title = new char[strlen(other.title) + 1];
  strcpy(this->title, other.title);
  this->price = other.price;
}

Book::~Book() {
  delete[] title;
}

void Book::set(const char* title, int price) {
  delete[] this->title;
  
  this->title = new char[strlen(title) + 1];
  strcpy(this->title, title);
  this->price = price;
}


int main() {
  Book cpp("명품C++", 10000);
  Book java = cpp;
  java.set("명품자바", 12000);
  cpp.show();
  java.show();
}
