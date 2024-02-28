#include <iostream>

using namespace std;

int main() {
  int num1, num2, num3;

  cout << "Introduzca tres enteros distintos: ";
  cin >> num1 >> num2 >> num3;

  // Calcular la suma, promedio, producto, menor y mayor
  int suma = num1 + num2 + num3;
  int promedio = suma / 3;
  int producto = num1 * num2 * num3;
  int menor = num1;
  int mayor = num1;

  // Encontrar el menor y el mayor
  if (num2 < menor) {
    menor = num2;
  }
  if (num3 < menor) {
  if (num3 > mayor) {
    mayor = num3;
  }

  // Imprimir los resultadoss
  cout << "La suma es " << suma << endl;
  cout << "El promedio es " << promedio << endl;
  cout << "El producto es " << producto << endl;
  cout << "El menor es " << menor << endl;
  cout << "El mayor es " << mayor << endl;

  return 0;
}
    menor = num3;
  }
  if (num2 > mayor) {
    mayor = num2;
  }

