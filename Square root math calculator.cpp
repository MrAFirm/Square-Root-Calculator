
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Integer {
public:
    int x;
    bool loop = true;
        void Choice() {
            char myLetter;
            cout << "\nDo you wish to continue? Y/N" << endl;
            cin >> myLetter;
            if (myLetter == 'N') {
                loop = false;
            }
        }
};
int main() {
    Integer myChicken;
    while (myChicken.loop) {
    cout << "Type a number: ";
    cin >> myChicken.x;
    for (myChicken.x > 0; myChicken.x < 100; myChicken.x++) {
        cout << sqrt(myChicken.x);
    }
    myChicken.Choice();
    }

    return 0;
}
