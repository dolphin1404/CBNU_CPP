#include <iostream>
using namespace std;

double biggest(double* arr, int i) {
    double big = arr[0]; 
    for (int j = 1; j < i; j++) { 
        if (big < arr[j]) 
            big = arr[j]; 
    }
    return big; 
}

int main() {
	double a[5];
	cout << "5 ���� �Ǽ��� �Է��϶�>>";
	for (int i = 0; i < 5; i++) cin >> a[i];
	cout << "���� ū �� = " << biggest(a, 5) << endl;
}