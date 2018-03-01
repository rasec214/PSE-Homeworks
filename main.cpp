#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	string nombre,cedula; float peso = 0.00,precio = 0.00,costo = 0.00;
	cout << "Digite nombre completo \n";				getline(cin,nombre);
	cout << "Digite cedula completa \n";				cin >> cedula;
	cout << "Digite el peso y precio del objeto \n";	cin >> peso >> precio;
	
	if (peso < 50)
		{	
			if (precio > 75)	
				costo = 0.00;
			if ((precio > 50) && (precio <= 75))	
				costo = 5.00;
			if ((precio > 25) && (precio <= 50))	
				costo = 10.00;
			if ((precio >= 0) && (precio <= 25))	
				costo = 15.00;
		}	
	else
		costo = 25*(1-pow((1.01),(-9.21*peso)));
		
	cout << fixed << setprecision(2);
	cout << left << setw(30) << "Nombre Completo";
	cout << right << setw(15) << "Cedula";
	cout << right << setw(10) << "Peso";
	cout << right << setw(10) << "Precio";
	cout << right << setw(10) << "Costo" << endl;
	
	cout << left << setw(30) << nombre;
	cout << right << setw(15) << cedula;
	cout << right << setw(10) << peso;
	cout << right << setw(10) << precio;
	cout << right << setw(10) << costo;
	
	
	return 0;
}
