#include <iostream>


using namespace std;

int main()
{
	char operacion;
	int num1,num2;
	cout << "operacion:";
	cin >> operacion;
	cout << "numeros:";
	cin >> num1 >> num2;
	if (operacion == '+')
	{
		cout << num1+num2 << endl;
	}
	else if (operacion == '-')
	{
		cout << num1-num2;	
	}
	else if (operacion == '*')
	{
		cout << num1*num2;	
	} 
	else
	{
		cout << num1/num2;
	}
	return 0;
}