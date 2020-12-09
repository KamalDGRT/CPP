#include <iostream>
using namespace std;
void square (int *a) {
    *a = (*a + 1) * (*a);
}

int main() {
    int b = 10;
    square(&b);
    cout << b;
    return 0;
}
