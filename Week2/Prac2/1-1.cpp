#include <iostream>
int sum(int, int);

using namespace std;

int main() {
	int n = 0;
	cout << "������ �Է��ϼ��� >>";
	cin >> n;
	if (n <= 0) {
		cout << "����� �Է��ϼ���!\n";
		return 0;
	}
	printf("1���� %d������ ���� %d�Դϴ� \n", n, sum(1, n));
	return 0;
}
int sum(int a, int b) {
	int res = 0;
	for (int k = a; k <= b; k++) {
		res += k;
	}
	return res;
}