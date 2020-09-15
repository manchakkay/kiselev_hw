#include "Kiselev-8-class.h"

using namespace std;

int main()
{
    bool x_arr[8] = {1, 0, 1, 1, 1, 0, 1, 0};
    Byte x(x_arr);

    bool z_arr[8] = {0, 0, 0, 1, 0, 1, 0, 1};
    Byte z(z_arr);

    Byte y = Byte::bool_and(x, z);
    cout << y[0] << y[1] << y[2] << y[3] << y[4] << y[5] << y[6] << y[7] << endl;

    y = x+y;
}