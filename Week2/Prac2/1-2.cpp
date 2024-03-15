#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i < 10; i++) {
		for(int j = 1; j<10; j++){
			//printf("%dX%d=%d ", i, j, i * j);
			cout << i << "X" << j << "=" << i * j << " ";
		}
		cout << endl;
	}
}
