#include <iostream>

//Función para restar dos números sin usar directamente el operador "-"
void resta(int num1, int num2)
{
	int result{ 0 };

	//Se muestra en pantalla el mensaje con las variables "num1" y "num2" antes de que cambien su valor original
	std::cout << "El resultado de la resta de " << num1 << " - " << num2 << " es: ";

	//Con esta condicional se ejecuta un bucle while diferente dependiendo de que numero es mayor
	if (num1 > num2)
	{
		//El bucle While se ejecutara mientras "num1" y "num2" tengan diferente valor
		while (num1 != num2)
		{
			num2++;
			result++;
		}
	}
	else if (num1 < num2)
	{
		//El bucle While se ejecutara mientras "num1" y "num2" tengan diferente valor
		while (num1 != num2)
		{
			num1++;
			result--;
		}
	}

	//Se muestra por pantalla el valor que tiene la variable "result"
	std::cout << result << "\n";
}

//Función para multiplicar dos números sin usar directamente el operador "*"
void multiplicacion(int num1, int num2)
{
	int result{ 0 };

	//Con esta condición se revisa cual de los numeros es el menor para asi usar el mayor para la operación
	if (num1 <= num2)
	{
		//En el bucle se añadira el valor del numero mayor a una variable las veces que indique el numero menor
		for (int i{ 0 }; i < num1; i++)
		{
			result += num2;
		}
	}
	else if (num2 < num1)
	{
		for (int j{ 0 }; j < num2; j++)
		{
			result += num1;
		}
	}

	//Muestra en pantalla el valor que se tiene en la variable "result"
	std::cout << "El resultado de la multiplicacion de " << num1 << " x " << num2 << " es: " << result << "\n";
}

//Función para dividir dos números sin usar directamente el operador "/"
void division(int num1, int num2)
{
	int result{ 0 };

	//Se muestra en pantalla el mensaje con las variables "num1" y "num2" antes de que cambien su valor original
	std::cout << "El resultado de la division de " << num1 << " / " << num2 << " es: ";

	//El bucle se ejecutara mientras la variable "num1" sea mayor o igual a la variable "num2"
	while (num1 >= num2)
	{
		//En cada iteración se resta el valor de "num2" a "num1"
		num1 -= num2;
		//La variable "result" se incrementara con cada iteración del bucle
		result++;
	}

	//Se muestra en pantalla el valor de la variable "result"
	std::cout << result << "\n";
}

//Función para realizar la potencia de un número sin usar la función "pow"
void potencia(int num1, int num2)
{
	int result{ num1 };

	//El bucle for se ejecutara hasta que la variable "i" sea mayor a la variable "num2"
	for (int i{ 1 }; i < num2; i++)
	{
		//El valor actual de "result" se multiplica por el valor de la variable "num1"
		result *= num1;
	}

	//Se muestra en pantalla un mensaje indicando el resultado de la potencia, la variable "result" tiene el valor de dicha operación
	std::cout << "El resultado de la potencia de " << num1 << " ^ " << num2 << " es: " << result << "\n";
}

//Función para conocer el factorial de un número
void factorial(int num1)
{
	int result{ 1 };

	//Muestra en pantalla un mensaje indicando el valor de la variable "num1" antes de que cambie su valor
	std::cout << "El resultado del factorial de " << num1 << "!" << " es: ";

	//El bucle se ejecutara mientras la variable "num1" se mayor a 1
	while (num1 > 1)
	{
		//El valor de la variable result se multiplica por el valor de "num1"
		result *= num1;
		//El valor de "num1" decrementa en uno
		num1--;
	}

	//Muestra en pantalla el valor de la variable "result"
	std::cout << result << "\n";
}

//Función para saber si un número es primo
void numPrimo(int num1)
{
	bool result{ true };

	//El bucle se ejecutara mientras "i" sea menor o igual a la mitad del valor de la variable "num1" y la variable "result" sea true
	for (int i{ 2 }; i <= (num1 / 2) && result; i++)
	{
		//La condición se encarga de cambiar a false el valor de "result" en caso de que el residuo de la división de "num1" entre "i" sea igual a 0
		if (num1 % i == 0)
		{
			result = false;
		}
	}

	//Dependiendo de si el valor de la variable "result" es true o false se mostrara un mensaje diferente
	if (result)
	{
		std::cout << "El numero " << num1 << " es primo\n";
	}
	else
	{
		std::cout << "El numero " << num1 << " no es primo\n";
	}
}

//Función para saber si un número es perfecto
void numPerfecto(int num1)
{
	int result{ 0 };

	//El bucle se ejecutara mientras "i" sea menor o igual a la mitad del valor de la variable "num1"
	for (int i{ 1 }; i <= (num1 / 2); i++)
	{
		//Si el residuo de la división entre "num1" e "i" es 0, el valor de "result" se sumara con el que tenga "i"
		if (num1 % i == 0)
		{
			result += i;
		}
	}

	//En caso de que "result" sea igual a "num1" se mostrara un mensaje diferente
	if (result == num1)
	{
		std::cout << "El numero " << num1 << " es perfecto\n";
	}
	else
	{
		std::cout << "El numero " << num1 << " no es perfecto\n";
	}
}

//Función para saber si dos números son amigos
void numAmigos(int num1, int num2)
{
	int result1{ 0 }, result2{ 0 };

	//El bucle se ejecutara mientras "i" sea menor o igual a la mitad del valor de la variable "num1"
	for (int i{ 1 }; i <= (num1 / 2); i++)
	{
		//Si el residuo de la división entre "num1" e "i" es 0, el valor de "result1" se sumara con el que tenga "i"
		if (num1 % i == 0)
		{
			result1 += i;
		}
	}
	//El bucle se ejecutara mientras "i" sea menor o igual a la mitad del valor de la variable "num2"
	for (int j{ 1 }; j <= (num2 / 2); j++)
	{
		//Si el residuo de la división entre "num2" y "j" es 0, el valor de "result2" se sumara con el que tenga "j"
		if (num2 % j == 0)
		{
			result2 += j;
		}
	}

	//Si el valor de "result1" y "num2" es igual y el valor de "result2" y "num1" tambien es igual se mostrara un mensaje indicando que son "amigos"
	if (result1 == num2 && result2 == num1)
	{
		std::cout << "Los numeros " << num1 << " y " << num2 << " son amigos\n";
	}
	else
	{
		std::cout << "Los numeros " << num1 << " y " << num2 << " no son amigos\n";
	}
}

//Función para saber si un número es guay
void numGuay(int num1)
{
	int result{ 0 };

	//El bucle se ejecutara mientras el valor de "i" sea menor a el valor de "num1"
	for (int i{ 1 }; i < num1; i++)
	{
		//Si el valor de "result" es igual al de "num1" se saldra del bucle, en caso contario se sumara el valor de "i" a "result
		if (result == num1)
		{
			break;
		}
		else
		{
			result += i;
		}
	}

	//Si el valor de "result" es igual a "num1" se mostrara un mensaje
	if (result == num1)
	{
		std::cout << "El numero " << num1 << " es guay\n";
	}
	else
	{
		std::cout << "El numero " << num1 << " no es guay\n";
	}
}