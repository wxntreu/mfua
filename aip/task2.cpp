#include <iostream>
using namespace std;

int main() {
    double c, m, x, b, z;
    cin >> c >> m >> x >> b;
    if (c + m < 2 * x - b) {
        z = c + m;
    } else {
        z = 2 * x - b;
    }
    cout << z << endl;
    return 0;
}