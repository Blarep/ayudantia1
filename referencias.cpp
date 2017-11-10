#include <iostream>

using namespace std;

int main()
{
	int a;
	a = 10;
	cout << &a << " " << a;

	int *puntero_a;
	
	puntero_a = &a;

	return 0;
}