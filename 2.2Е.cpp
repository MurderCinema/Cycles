#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    float dx, xf, x;
    float f;
        cout << "Vvedite shag: ";
        cin >> dx;
        cout << "Vvedite min. znachenie diapazona: ";
        cin >> x;
        cout << "Vvedite max. znachenie diapazona: ";
        cin >> xf;

        cout << "\tx\t\ty" << endl;

        cout.precision(5);

        while (x < xf + 1){
            f = pow((2 + x),2) + (3 * x);
            cout << "\t" << x << "\t\t" << f << endl;
            x += dx;
        }
        return 0;
}

