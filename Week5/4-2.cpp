#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<string> names;
    cout << "이름을 5개 입력하라" << endl;

    for (int i = 0; i < 5; i++) {
        string name;
        cout << i + 1 << ">>";
        getline(cin, name);
        names.push_back(name);
    }

    sort(names.begin(), names.end());

    cout << "사전에서 가장 뒤에 나오는 이름은 " << names.back() << endl;

    return 0;
}