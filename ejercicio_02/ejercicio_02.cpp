#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double a, b, c;

    cout << "Ingrese los tres lados del triangulo que quiere clasificar: ";
    cin >> a >> b >> c;

   
    if (a + b > c && a + c > b && b + c > a) {

  
        if (a == b && b == c) {
            cout << "El triangulo es equilatero\n";
        } 
        else if (a == b || a == c || b == c) {
            cout << "El triangulo es isosceles\n";
        } 
        else {
            cout << "El triangulo es escaleno\n";
        }

       
        double mayor = a;

        if (b > mayor) mayor = b;
        if (c > mayor) mayor = c;

        double sumaCuadrados = pow(a, 2) + pow(b, 2) + pow(c, 2) - pow(mayor, 2);

        if (pow(mayor, 2) == sumaCuadrados) {
            cout << "Es rectangulo\n";
        } 
        else if (pow(mayor, 2) < sumaCuadrados) {
            cout << "es acutangulo\n";
        } 
        else {
            cout << "es obtusangulo\n";
        }

    } else {
        cout << "no forman un triangul valido\n";
    }

    return 0;
}
