#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double radio, areaCirculo, areaCirculo2, areaCirculo3, lado, areaCuadrado;
    int base, altura, areaTriangulo;

    cout << "Calculemos el area de un circulo" << endl;
    cout << "Por favor digite un numero para el radio" << endl;
    cin >> radio;

    areaCirculo = 3.1416 * radio * radio;
    areaCirculo2 = 3.1416 * pow(radio, 2);

    cout << "El area del circulo es: " << areaCirculo << endl;
    cout << "El area del circulo es: " << areaCirculo2 << endl; 

    cout << "Calculemos el area del cuadrado " << endl;
    cout << "Por favor digite un valor numerico para el lado" << endl;
    cin >> lado;

    areaCuadrado = pow(lado,2);
    cout << "El area del cuadrado es: " << areaCuadrado << endl;

    cout << "Calculemos el area del triangulo" << endl;
    cout << "Por favor digite el valor numerico de la base" << endl;
    cin >> base;
    cout << "Por favor dgite el valor numerico de la altura" << endl;
    cin >> altura;

    areaTriangulo = (base*altura)/2;

    cout << "El area del triangulo es: " << areaTriangulo << endl;
    
    return 0; 
}

