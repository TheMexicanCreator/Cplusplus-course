#include <iostream>
using namespace std;

int main() {
    int num = 100;
    while(num >= 90) {
        if (num == 96) {
            //Doesn't print 96, but it prints the remaining numbers
            num--;
            continue;
        }
        //"cout" prints the command to the terminal
        cout << "Value is: " << num << endl;
        num--;
    }
}