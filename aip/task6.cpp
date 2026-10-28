#include <iostream>
#include <clocale>
using namespace std;
int main() {
    double x, y;
    cin >> x;
    if (x < -5)
    {
        y = 0;
    }
    else
    {
        if (-5 <= x and x <= -2)
        {
            y = 3 * x - 5;
        }
        else
        {
            if (-2 <= x and x < 2)
            {
                y = x;
            }
            else
            {
                if (2 <= x and x < 5)
                {
                    y = x * x;
                }
                else
                {
                    y = 3;
                }
            }
        }
    }
    cout << y << endl;
    return 0;
}
