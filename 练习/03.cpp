#include <iostream>
#include <iomanip>
using namespace std;

// 03:对齐输出

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << setw(8) << a
         << setw(8) << b
         << setw(8) << c
         << endl;
         return 0;
}