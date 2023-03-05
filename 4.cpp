#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cout << "Vvedite H;" << endl;
    cin >> a;
    cout << "Vvedite M;" << endl;
    cin >> b;
    cout << "Vvedite Shag;" << endl;
    cin >> c;
    for (int counter = a; counter <= b; counter+=c){
        cout << counter << " ";
    }
    return 0;
}

