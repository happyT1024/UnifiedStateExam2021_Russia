#include <iostream>

using namespace std;
#define i(a, b) (!a || b)

int main() {
    for (int A = 10000; A > 0; A--) {
        bool f = true;
        for (int x = 0; x < 10000; x++) {
            if (!(i((x >= 11), (x * x >= A)))) {
                f = false;
            }
        }
        if (f) {
            cout << A;
            break;
        }
    }

    return 0;
}

