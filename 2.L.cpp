#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.14159265

using namespace std;

int main()
{
    float dx, xf, x;
    float f;
        cout << "Vvedite shag: ";
        cin >> dx;
        cout << "Vvedite min. znachenie diapazona: ";
        cin >> x;
        cout << "Vvedite max. znachenie diapazona: ";
        cin >> xf;

            if (x > 0) {
                cout << "\tx\t\ty" << endl;

                cout.precision(5);

                while (x < xf + 1){
                f = sqrt((5 * x) + pow((4 * x),3)) + (4 * x) + 3 / sin(((9 * x) + 71) * PI / 180);
                cout << "\t" << x << "\t\t" << f << endl;
                 x += dx;
                }
}
            else {
                cout << "Podkorennoe virazhenie < 0";
            }
        return 0;
}
