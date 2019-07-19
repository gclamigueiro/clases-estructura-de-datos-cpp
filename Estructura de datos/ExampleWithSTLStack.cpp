// copied from https://www.geeksforgeeks.org/stack-in-cpp-stl/
// CPP program to demonstrate working of STL stack
#include <iostream> 
#include <stack> 
using namespace std;

void showstack(stack <int> s)
{
	while (!s.empty())
	{
		cout << '\t' << s.top();
		s.pop();
	}
	cout << '\n';
}

int mainStlStack()
{
	stack <int> s;
	s.push(10);
	s.push(30);
	s.push(20);
	s.push(5);
	s.push(1);

	cout << "The stack is : ";
	showstack(s);

	cout << "\ns.size() : " << s.size();
	cout << "\ns.top() : " << s.top();


	cout << "\ns.pop() : ";
	
	while (!s.empty())
	{
		cout << '\t' << s.top();
		s.pop();
	}

	cout << "\ns.size() after pop : " << s.size() <<endl;

	system("pause");

	return 0;
}