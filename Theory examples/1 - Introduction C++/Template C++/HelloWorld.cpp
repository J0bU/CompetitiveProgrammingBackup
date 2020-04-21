#include <bits/stdc++.h>

using namespace std;

int main() {

	// Inicio del problema.
	
	cout <<"------ Ingreso de dos enteros y un string. -----\n";
	
	// Captura de los datos usando la instrucción cin >>
	int a,b;
	string c; 
	cin >> a >> b >> c;
	
	// Impresión de los datos usando cout << 
	cout <<"Entero numero 1:"<<" "<<a<<" "<<"Entero numero 2:"<<" "<<b<<" "<<"String:"<<" "<<c<<"\n";
	
	// El módulo se encarga de buscar la parte entera de una divión y retornar el resultado
	// por ejemplo 10%3 = 1, 3*3 = 9 -> 10 -> 1.
	cout <<"Uso de mod (modulo): \n";
	int mod = 3;
	int calculo;
	cin>> calculo;
	calculo = calculo%mod;
	cout<<"Resultado mod: "<<calculo<<"\n";
	
	//Uso de flotantes -> Se imprimen por medio de printf.
	double x= 10.123123;
	printf("%.9f\n", x);
	
	
	
	
	

}
