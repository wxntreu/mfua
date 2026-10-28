#include <iostream>
#include <clocale>
using namespace std;
int main() {
    double x, y, z;
    cin >> x >> y >> z;
    if ((x==0) || (y==0) || z == 0)
    {
        cout << "no ex";
    }
    else
    {
        if (x + y <= z || x + z <= y || y + z <= x)
        {
            cout << "no ex";
        }
        else
        {
            if ((x == y) && (x == z) && (y == z))
            {
                cout << "ravnostor";
            }
            else
            {
                if (x == y || x == z || y == z)
                {
                    cout << "ravnbedr";
                }
                else
                {
                    cout << "raznostor";
                }
            }
        }
    }
    return 0;
}
