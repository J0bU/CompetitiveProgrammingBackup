#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n = 0, indiceSubString = 0, iteradorSub = 0;
	string secuencia, subString, total;
	vector<string> arreglos;
	cin >> 	n;
	
	
	while(n--)
	{
		cin.ignore();		
	  	getline(cin, secuencia);
	  	
	  	
	  	indiceSubString = (int)secuencia.size() / 2;
//	  	cout << indiceSubString;

	  	subString = secuencia.substr(0, indiceSubString);
	  	
	  	for(int i = 0; i<indiceSubString; i++)
		{
//			cout << subString[i] << endl;
			if(i == 0) total += subString[i];
			else if(iteradorSub == 2) {
				
//				cout << "Indice: "<< i<< endl;  
				total += subString[i];
//				cout << "ValorIterador: "<< iteradorSub<< endl;  
//				cout << "SubString: "<< indiceSubString<< endl;
				iteradorSub = 0 ;
			}
			
			
			iteradorSub += 1;
		}
//		cout << total;
		arreglos.push_back(total);
//	  	cout << subString << endl; 	  	
	}
	
	for(int i= 0; i < (int)arreglos.size(); i++)
	{
		cout << arreglos[i]	 << endl;
	}
	
	return 0;
}
