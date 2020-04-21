#include <bits/stdc++.h>

using namespace std;

int main()
{
	int arreglo[20];
	int valorArreglo;
	for(int i=0;i<10;i++){
		cout<<"Ingresa un valor para el indice "<<i<<"\n";
		cin>>valorArreglo;
		arreglo[i] = valorArreglo;
	}
	
	cout<<"\t Print Data \n";
	for(int i = 0; i<10; i++){
		cout<<"Valor arreglo["<<i<<"]: "<<arreglo[i]<<"\n";
	}
	
	return 0;
}
