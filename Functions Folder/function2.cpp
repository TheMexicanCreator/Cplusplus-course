#include <iostream>
using namespace std;

//Adds numbers into the main function
void Increment(int &s) {
    s = s + 5000;
    cout << "Salary inside function: " << s << endl;
}

int main() {
    int sal = 270000;
    Increment(sal);
    cout << "Salary inside main: " << sal << endl;
    return 0;
}
