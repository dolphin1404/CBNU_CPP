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

  // friend 함수
  friend Book& operator+=(Book& book, int amount);
  friend Book& operator-=(Book& book, int amount);
};

// 외부에서 선언
Book& operator+=(Book& book, int amount) {
  book.price += amount;
  return book;
}

Book& operator-=(Book& book, int amount) {
  book.price -= amount;
  return book;
}

int main() {
  Book a("청춘", 20000, 300), b("미래", 30000, 500);

  a += 500;
  b -= 500;

  a.show();
  b.show();

  return 0;
}
