#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double x;


 

   cout<<"ingrese su temperatura en Celsius";
   cin >>x;
      double f = x * 1.8 + 32;
   double k = x + 273.15;
   double r = x * 1.8 + 491.67;
   
   cout<<" tu temperatura en Fahrenheit es " << f <<"\n"<< " tu temperatura en Kelvin es "<< k << "\n" << "tu  temperatura en Rankine es " << r;

    return 0;
}
