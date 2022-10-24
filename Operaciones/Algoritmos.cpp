#include <iostream>
#include "Operaciones.h"

int main()
{
	int num1{ 0 }, num2{ 0 };
	std::cout << "Ingresa el primer valor: ";
	std::cin >> num1;
	std::cout << "Ingresa el segundo valor: ";
	std::cin >> num2;

	resta(num1, num2);
	multiplicacion(num1, num2);
	division(num1, num2);
	potencia(num1, num2);
	numAmigos(num1, num2);
	factorial(num1);
	numPrimo(num1);
	numPerfecto(num1);
	numGuay(num1);

	return 0;
}