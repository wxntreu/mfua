#include <iostream>
using namespace std;
int main() {
    double x, y;
    cin >> x;
    if (x > 20)
    {
        y = (x - 10);
    }
    if (0 <= x and x <= 20)
    {
        y = 3 * x;
    }
    if  (x < 0)
    {
        y = x / 5;
    }
    cout << y << endl;

    return 0;
}
