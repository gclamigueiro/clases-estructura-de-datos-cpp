#include <iostream> 
#include <random> 
#include "ArrayQueue.h"	 

using namespace std;
using namespace System;

class SourceRecursion
{

private:
	static int factorial(int num)
	{
		if (num == 1)
			return 1;
		else
			return num * factorial(num - 1);

	}

	// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597
	static int fibonacci(int n)
	{
		if (n < 2)
			return n;

		return fibonacci(n - 1) + fibonacci(n - 2);
	}


	/* Recursive solution */
	static int binarySearch(int list[], int toSearch, int p, int r) {

		if (p > r)
			return -1;
		else
		{
			int q = (p + r) / 2;
			if (list[q] == toSearch)
				return q;
			else
			{
				if (list[q] < toSearch)
					return binarySearch(list, toSearch, q + 1, r);
				else
					return binarySearch(list, toSearch, p, q - 1);
			}
		}
	}

	public :
	static void run()
	{
		int n;
		do {
			cout << "Inserte un número positivo mayo a cero" << endl;
			cin >> n;
		} while (n <= 0);

		cout <<"El factorial es: " << factorial(n) << endl;
		cout << "El n término de fibonacci es: " << fibonacci(n) << endl;

		cout << endl;
		cout << "Probando binarySearch recursivo " << endl;
		int lista[] = { 4,7,8,12,14,25,35,42,67,89 };

		cout << "Lista " << endl;
		for (int i = 0; i < 10; i++) {
			cout << lista[i] << " ";
		}
		cout << endl;
		cout << "número 14 encontrado en la pos: " << binarySearch(lista, 14, 0, 10) << endl;
		cout << "número 4  encontrado en la pos: " << binarySearch(lista, 4, 0, 10) << endl;
		cout << "número 89 encontrado en la pos: " << binarySearch(lista, 89, 0, 10) << endl;
		cout << "número 68 no encontrado: " << binarySearch(lista, 68, 0, 10) << endl;


	}

};