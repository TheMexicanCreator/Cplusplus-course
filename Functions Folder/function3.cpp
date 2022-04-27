#include <iostream>
using namespace std;

//How to add two numbers in C++
int sum(int a, int b) {
    int c;
    c = a + b;
    return c;
}

int main() {
    int s;
    s = sum(5,5);
    cout << "The sum of the two numbers is: " << s << endl;
}