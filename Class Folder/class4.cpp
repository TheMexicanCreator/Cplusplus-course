#include <iostream>
using namespace std;

class Gambit {
    public:
    Gambit() {
        cout << "I'm a constructor." << endl;
    }
    ~Gambit() {
        cout << "I'm a destructor." << endl;
    }
    void display() {
        cout << "Hi! :)" << endl;
    }
};

int main() {
    Gambit gam;
    gam.display();
    return 0;
}
