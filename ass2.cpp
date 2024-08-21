#include <iostream>
using namespace std;

int main() {
    cout << "Operators that cannot be overloaded in C++:" << endl;
    cout << "1. Scope resolution operator (::)" << endl;
    cout << "2. Member access or dot operator (.)" << endl;
    cout << "3. Member pointer access or arrow operator (.*)" << endl;
    cout << "4. Ternary or conditional operator (?:)" << endl;
    cout << "5. Sizeof operator (sizeof)" << endl;
    cout << "6. Typeid operator (typeid)" << endl;
    cout << "7. Alignof operator (alignof)" << endl;
    cout << "8. noexcept operator (noexcept)" << endl;
    cout << "9. new operator (new)" << endl;
    cout << "10. delete operator (delete)" << endl;
    cout << "11. new[] operator (new[])" << endl;
    cout << "12. delete[] operator (delete[])" << endl;

    return 0;
}

