#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Ingrese el primer numero: " ;
    cin >> a;

    cout << "Ingrese el segundo numero: " ;
    cin >> b;

    int suma = a + b;
    int diferencia = a - b;
    int producto = a * b;
    int division = a / b;
    int residuo = a % b;

    cout << "Suma: " << suma << endl;
    cout << "Diferencias: " << diferencia << endl;
    cout << "Producto: " << producto << endl;
    cout << "Division: " << division << endl;
    cout << "Residuo: " << residuo << endl;

    return 0;

}