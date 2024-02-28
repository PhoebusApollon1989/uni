#include <iostream>

using namespace std;

int main() {
  int radio;
  double pi = 3.14159;

  cout << "Introduzca el radio de un círculo: ";
  cin >> radio;

  // Calcular el diametro, la circunferencia y el area
  int diametro = 2 * radio;
  double circunferencia = 2 * pi * radio;
  double area = pi * radio * radio;

  // Imprimir los resultados
  cout << "El diametro es " << diametro << endl;
  cout << "La circunferencia es " << circunferencia << endl;
  cout << "El area es " << area << endl;

  return 0;
}


