#include <iostream>
using namespace std;

int main() {
    double x, y;
    cin >> x;
    if (x < 1) {
        y = 2 * x + 3;
    } else {
        y = 4 * x + 5;
    }
    cout << y << endl;
    return 0;
}