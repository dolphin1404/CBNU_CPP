#include <iostream>
#include <string>

using namespace std;

class Book {
  string title;
  int price;
  int pages;

 public:
  Book(string title = "", int price = 0, int pages = 0) {
    this->title = title;
    this->price = price;
    this->pages = pages;
  }

  void show() {
    cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
  }

  string getTitle() { return title; }

  // friend 연산자 함수 선언
  friend bool operator==(const Book& book, int price);
  friend bool operator==(const Book& book, string title);
  friend bool operator==(const Book& a, const Book& b);
};

// friend 연산자 함수 정의
bool operator==(const Book& book, int price) { return book.price == price; }

bool operator==(const Book& book, string title) { return book.title == title; }

bool operator==(const Book& a, const Book& b) {
  return (a.title == b.title && a.price == b.price && a.pages == b.pages);
}

int main() {
  Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
  // price 비교
  if (a == 30000) cout << "정가 30000원" << endl;
  // 책 title 비교
  if (a == "명품 C++") cout << "명품 C++ 입니다." << endl;
  // title, price, pages 모두 비교
  if (a == b) cout << "두 책이 같은 책입니다." << endl;

  return 0;
}
