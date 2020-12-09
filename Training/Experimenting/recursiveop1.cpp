#include <iostream>
using namespace std;

int fun(int count) {
    cout << count << " ";
    if(count < 2)
        fun(fun(fun(++count)));
    return count;
}
int main() {
    fun(1);
    return 0;
}
