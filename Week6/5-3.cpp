#include <iostream>
using namespace std;

class MyVector {
	int* mem;
	int size;
public:
	MyVector(int n, int val);
	~MyVector() { delete[] mem; }
	void show() const {
		for (int i = 0; i < size; ++i)
			cout << mem[i] << " ";
		cout << endl;
	}
};

MyVector::MyVector(int n = 100, int val = 0) {
	mem = new int[n];
	size = n;
	for (int i = 0; i < size; i++) mem[i] = val;
}

int main() {
	MyVector vec1;
	MyVector vec2(5, 3);

	vec1.show();
	vec2.show();

	return 0;
}