#include <iostream>
using namespace std;

class Franchise {
    public:
    void KFC() {
        cout << "We have the best chicken!" << endl;
    }
    void BK() {
        cout << "We have the best burgers!" << endl;
    }
};

int main() {
    Franchise fran;
    fran.KFC();
    fran.BK();
    return 0;
}
