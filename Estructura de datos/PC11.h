#pragma once
#include <iostream> 
#include <functional>
#include <math.h>
#include <string>

using namespace std;
using namespace System;

class PC11
{

private:

	//Ej 1 Calcular el tiempo detallado y la notación Big O
	//int func1(int *vec, int n)
	//{
	//	int val += 0;  // 2 (1 Asignacion, 1 Operacion)

	//	if (n > 0 && n < 10)  // 2 (2 Comparaciones) + MAX(if,else)  => 2 + 1 + 4N + 4N^2 => 4N^2 + 4N + 3 
	//	{
	//		for (int k = 0; k < n; ++k)  //   1 + N(1 + _1 + 4N__ + 2) => 1 + N(4 + 4N) => 1 + 4N + 4N^2
	//		{
	//			for (int i = n; i > 0; i /= 2) //   1 + N/2(1 + _5__ + 2) => 1 + N/2(8) => 1 + 4N
	//			{
	//				if (k % 5 == 0 || n % k == 1) // 5 (2 Operaciones %, 2 Comparaciones) + 1
	//					++acumula;  // 1            
	//				else                   
	//					sum--;     // 1
	//			}
	//		}
	//	}
	//	else       
	//		sum = -1; // 1 Asignacion


	//	// 2 + 4N^2 + 4N + 3  => 4N^2 + 4N + 5
	//	// B(O) = N^2


	//	return 0;    // Se cuenta el return como 1?
	//}

	//Ej 2 Calcular el tiempo detallado y la notación Big O
	//int* fibonacci(int n)
	//{
	//	int *f = new int[n];  // 1 Asignacion
	//	
	//	if (f == NULL)       // 1 Comparacion
	//		return nullptr; // ?

	//	for (int i = 0; i < n; ++i) // 1 + N(1 + __8__ + 2) => 1 + 11N
	//		if (i >= 2) // 1 + MAX(IF,ELSE) => 1 + 7 => 8
	//			f[i] = f[i - 1] + f[i - 2];  // 7 (1 ASIGNACION, 3 ACCESOS, 3 Operacaciones  )
	//		else
	//			f[i] = 1; // 2 (1 Asignacion, 1 Acceso)
	//	
	//	// 1 + 1 + 1 + 11N =>11N + 3
	//	// B(O) = N
	//	
	//	return f;
	//
	//}


	//Escriba funciones recursivas para :
	// Ej3	Ordenar de menor a mayor un arreglo de enteros basándose en la siguiente idea : 
	// coloque el elemento más pequeño en la primera ubicación, y luego ordene el resto del arreglo 
	// con una llamada recursiva.
	int* sortRecursive(int *arr, int pos, int N)
	{
		if (pos == N)
			return arr;

		// guardo el elemento que existe en esa posicion
		int valorOriginal = arr[pos];

		// declaro las variables que se usaran en el for para buscar el menor y su posicion
		int menor = arr[pos];
		int menorPos = pos;

		for (int i = pos + 1 ; i < N; i++)
		{

			int aux = arr[i];
			// si el valor en i es menor sustituye a menor
			if (aux < menor)
			{
				menor = aux;
				menorPos = i;
			}
		}

		// una vez que tenga el menor intercambio los valores de posiciones
		arr[pos] = menor;
		arr[menorPos] = valorOriginal;

		// vuelvo a realizar la misma operacion pero una posicion mas adelante
		return sortRecursive(arr, pos + 1, N);

	}

	// Ej4	Transformar un número expresado en notación binaria a un número entero.
	int toDecimal(string binary, int i = 0)
	{
		int n = binary.length();
		// If we reached last character 
		if (i == n )
			return 0;

		// https://stackoverflow.com/questions/5029840/convert-char-to-int-in-c-and-c
		int b = binary[i] - '0'; // 0 o 1

		int sum = b * pow(2, n - i - 1);

		return sum + toDecimal(binary, i + 1);
	
	}
	// Ej 5	Muestre si una cadena es palíndromo.


	// Modifique el programa anterior para utilizar punteros a funciones o expresiones lambda.
	// Alternativamente utilice templates. 
	// Ej6	Ordenar de menor a mayor
	template<class T>
	void sort(T *arr, int N) {

		auto esMayor = [](T a, T b) {
			if (a > b)
				return true;
			else 
				return false;
		};

		for (int i = 0; i < N - 1; i++)
		{
			for (int j = i + 1; j < N; j++)
			{
				if ( esMayor(arr[i], arr[j]) )
				{
					T aux = arr[i];
					arr[i] = arr[j];
					arr[j] = aux;
				}
			}
		}


	}


public:
	void run()
	{
		// Ej 3
		int N = 10;
		int *arr = new int[N];
		
		Random r;

		for (int i = 0; i < N; i++)
		{
			arr[i] = r.Next(0, 21);
			cout << arr[i] << " ";
		}
		cout << endl;

		sortRecursive(arr, 0, N);

		for (int i = 0; i < N; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;

		// Ej 4
		string s = "010";
		cout << s << endl;
		cout << toDecimal(s) << endl;

		// Ej 6
		int *arr1 = new int[N];


		for (int i = 0; i < N; i++)
		{
			arr1[i] = r.Next(0, 21);
			cout << arr1[i] << " ";
		}
		cout << endl;

		sort<int>(arr1,N);

		for (int i = 0; i < N; i++)
		{
			cout << arr1[i] << " ";
		}
		cout << endl;


	}
};