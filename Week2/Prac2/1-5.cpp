#include <iostream>
#include <cstring> // no use
using namespace std;

int main() {
	char password1[100], password2[100];
	cout << "�� ��ȣ�� �Է��ϼ��� >>";
	cin >> password1;
	cout << "�� ��ȣ�� �ٽ� �ѹ� �Է��ϼ��� >>";
	cin >> password2;
	if (strcmp(password1, password2) == 0) cout << "�����ϴ�.";
	else cout << "���� �ʽ��ϴ�.";
}