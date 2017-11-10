#include <iostream>

using namespace std;

int main()
{
	int v[10];
	int arreglo[5] = {1,2,3}; //los demas valores no se asignan
	int arreglo2[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> arreglo2[i];
	}

	arreglo2[0]=23409;

	//podemos definir arreglos de arreglos
	
	int arreglo2x2[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arreglo2x2[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arreglo2x2[i][j];
		}
	}
	
	return 0;
}