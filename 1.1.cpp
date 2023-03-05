#include <iostream>
using namespace std;

int main()
{
    double x;
    cout << "Vvedite chislo: ";
    cin >> x;
    for(int i=1; i < x + 1; i++){
        for(int j=0; j < i; j++)
            cout << 0;
        cout << endl;
    }
    cout << endl;
    getchar();
    getchar();
    return 0;
}
