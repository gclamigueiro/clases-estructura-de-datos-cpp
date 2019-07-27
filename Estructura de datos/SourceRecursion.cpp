#include <iostream> 
#include <random> 
#include "ArrayQueue.h"	 

using namespace std;
using namespace System;


int factorial(int num)
{
	if (num == 1)
		return 1;
	else
		return num * factorial(num - 1);

}

// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597
int fibonacci(int n)
{
	if (n < 2)
		return n;

	return fibonacci(n - 1) + fibonacci(n - 2);
}


int mainRecursion()
{
	
	cout<< factorial(3) << endl;

	cout << fibonacci(15) << endl;
		
	system("pause");
	return 0;
}