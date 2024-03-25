#include <iostream>
using namespace std;

int main() {
    int M[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int(*ptr)[3];
    int* p;
    int** pt;
    ptr = M;

    cout << "ptr: \t\t" << ptr << "\t\tM: \t\t" << M << endl;
    cout << "ptr+1: \t\t" << ptr + 1 << "\t\tM+1: \t\t" << M + 1 << endl << endl;
    cout << "*(ptr+1): \t" << *(ptr + 1) << "\t\tptr[1]: \t" << ptr[1] << endl
        << "*(M+1): \t" << *(M + 1) << "\t\tM[1]: \t\t" << M[1] << endl;
    cout << "**(ptr+1): " << **(ptr + 1) << "\t**(M+1): " << **(M + 1)
        << "\t*M[1]: " << *M[1] << "\tM[1][0]: " << M[1][0] << endl
        << endl;

    p = M[0];
    cout << "p: \t\t" << p << "\t\tM[0]: \t\t" << M[0] << "\t\t*M: \t" << *M
        << endl;
    cout << "p+1: \t\t" << p + 1 << "\t\tM[0]+1: \t" << M[0] + 1 << "\t\t*M+1: \t"
        << *M + 1 << endl;
    cout << "*(p+1): " << *(p + 1) << "\t*(M[0]+1): " << *(M[0] + 1)
        << "\t*(*M+1): " << *(*M + 1) << endl
        << endl;

    pt = &p;  // pt = M; (X)
    cout << "*pt: \t\t" << *pt << "\t\tp: \t\t" << p << endl;
    cout << "**pt: " << **pt << "\t\t*p: " << *p << endl;

    return 0;
}
