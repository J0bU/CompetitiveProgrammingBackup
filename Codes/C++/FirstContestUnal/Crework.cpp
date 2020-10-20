/* @JUDGE_ID:  P4N3L4  C++  "All-star Three-point Contest" */

/**************
 Solution to problem C, start programming contest: Este cÛdigo es reworkeado
 //ya que el inicial que tenÌa pensado saliÛ demasiado bug, asÌ que esta es una nueva oportunidad.
 by: P4N3L4

**************/

#include <bits/stdc++.h>

using namespace std;

struct Persona
{
    string Nombre;
    int Puntos;
} jugadores[102];

bool cmp(Persona a, Persona b){
	string auxiliarNamei, auxiliarNamej;
	auxiliarNamei = a.Nombre;
	auxiliarNamej = b.Nombre;
	transform(auxiliarNamei.begin(), auxiliarNamei.end(), auxiliarNamei.begin(), ::tolower);
	transform(auxiliarNamej.begin(), auxiliarNamej.end(), auxiliarNamej.begin(), ::tolower);
	
  	if(a.Puntos == b.Puntos){
   	 //otro criterio en cado de empate (si existe)
   	 return auxiliarNamei<auxiliarNamej;
 	}
 	return a.Puntos > b.Puntos;  // de mayor a menor
}

int main()
{
	
    // CantidadJugador: Representa la cantidad de jugadores que ser√°n ingresados.
    //TamanioJugadores: Ser√° una copia de la cantidad de jugadores ingresados.
    int cantidadJugadores, tamanioJugadores, caso = 1, suma = 0;

    //Se usar√° un set para saber si los n√∫meros son repetidos o no
    //debido a la condici√≥n del set de que si son repetidos no se almacenan
    //por ende finalmente si s√≥lo tenemos un valor en el set es que los jugadores
    //ingresados tuvieron puntos repetidos.
    //set<int> repetidos;

    //sentencia: almacenar√° la cadena que proporciona el juez.
    string sentencia, nombre;
    
    vector<char> puntos;


    //Ciclo que tomar√° la cantidad de jugadores y procesar√° cada uno de estos
    //a partir de la cantidad ingresada.

    while (cin >> cantidadJugadores)
    {
        cin.ignore();

		//tamanioJugadores: Su funciÛn se har· despuÈs,
		// lo importante es que tiene una copia de los jugadores que hay.
        tamanioJugadores = cantidadJugadores;

        for (int k = 0; k < tamanioJugadores; k++)
        {
            getline(cin, sentencia);

            // Se toma el tama√±o de la sentencia para luego saber hasta d√≥nde
            // va el for.
            int tamanio = (int)sentencia.size();
            
            //flag: Me permite saber si ya se llegÛ al primer ; 
			bool flag = true;
			//indiceSubString: Me permite saber hasta dÛnde ir· el nombre.
			int indiceSubString;
			
			//contadorMÛdulo: Me permite saber si ya se llegÛ a 5, es decir
			//al ˙ltimo punto.
			int contadorModulo = 0;
			
			for(int i = 0; i < tamanio; i++)
			{
					
                if (sentencia[i] == ';' && flag == true)
                {
                    indiceSubString = i;
                    flag = false;
    	        }
    	        else if(flag == false && sentencia[i] != ';'  && sentencia[i] != ' '){
    	        	
    	        	contadorModulo += 1;
    	        	
    	        	if(contadorModulo%5 == 0 && sentencia[i] == '1')
					{
    	        		suma += 2;
					}
					else if(sentencia[i] == '1')
					{
						suma += 1;
					}
					
				}
						
			}
			
			//Se asigna al jugador k el valor de la suma.
			jugadores[k].Puntos = suma;
			// Se extrae sÛlo el nombre a partir del Ìndice obtenido en la iteraciÛn.
            nombre = sentencia.substr(0, indiceSubString);
            //Se asigna al jugador k el nombre.
            jugadores[k].Nombre = nombre;
			suma = 0;
			nombre = "";
				

		}
        
        	
        
        cout << "Case "<<caso <<":"<<endl;
        sort(jugadores, jugadores + cantidadJugadores, cmp);
  		for(int i = 0; i<cantidadJugadores;i++){
  			
    	cout << jugadores[i].Nombre<<" "<<jugadores[i].Puntos<<endl;
  		}
        
        caso += 1;
    }
    return 0;
}
