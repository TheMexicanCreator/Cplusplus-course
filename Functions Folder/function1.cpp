#include <iostream>
using namespace std;

//Function oustide main
void Salary_Change(int s) {
    s = 30000;
    cout << "Value inside function: " << s << endl;
}

int main() {
    int sal = 270000;
    //Inserting the "void" command into the "main" function
    Salary_Change(sal);
    cout << "Value inside main: " << sal << endl;
    return 0;
}
