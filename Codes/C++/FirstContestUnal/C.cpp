/* @JUDGE_ID:  P4N3L4  C++  "All-star Three-point Contest" */

/**************
 Solution to problem C, start programming contest: Test: NOFUNCIONA.
 by: P4N3L4

**************/

#include <bits/stdc++.h>

using namespace std;

struct Persona
{
    string Nombre;
    int Puntos;
} jugadores[102];

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
//        cout << jugadores[0].Puntos <<endl;
//        cout << jugadores[1].Puntos <<endl;
//        cout << jugadores[2].Puntos <<endl;

		// contadorRepetidos: Permitir· saber si 
		// existen puntos repetidos o no, esto se tendr· en cuenta
		// para saber si todos los jugadores obtuvieron los mismos puntos
		// en caso contrario se ordenar· por nombre.
        int contadorRepetidos = 1;
        
        // Se obtiene el primer valor de puntos del primer jugador
        // con el objetivo de saber si hay alg˙n otro jugador con la misma puntuaciÛn
//        int repetido = jugadores[0].Puntos;
        int valorRepetido = 0;
        
        
        // BubbleSort: nos permite organizar, sin embargo su complejidad es O(n^2)
        for (int i = 0; i < tamanioJugadores - 1; i++)
        {
            for (int j = i + 1; j < tamanioJugadores; j++)
            {
            	// Este if permite saber si el valor que est· en la variable 'repetido'
        		// la contiene alg˙n otro jugador, por esa razÛn se aumenta en 1.
            	if(jugadores[i].Puntos == jugadores[j].Puntos) {
            	contadorRepetidos += 1;	
//            	cout << "Valor contadorRepetidos: "<< contadorRepetidos << endl;
            	valorRepetido = jugadores[i].Puntos ;
				}
				
                if (jugadores[i].Puntos < jugadores[j].Puntos)
                {
                    struct Persona temp = jugadores[i];
                    jugadores[i] = jugadores[j];
                    jugadores[j] = temp;
                }
            }
        }
        


        // Diferentes puntos ya que si la variable repetidos -----------------
        if (contadorRepetidos != 1 && contadorRepetidos == tamanioJugadores)
        {
            cout << "Case " << caso << ":\n";
            for (int i = 0; i < tamanioJugadores; i++)
            {
                cout << jugadores[i].Nombre << " " << jugadores[i].Puntos << endl;
            }
        }
        
		else if(contadorRepetidos != 1 && contadorRepetidos != tamanioJugadores){
//			cout << "DEBE ENTRAR ACA " << endl;
//			cout << "VALOR REPETIDO: "<< valorRepetido << endl;
			
			string auxiliarNamei, auxiliarNamej;
	        for (int i = 0; i < tamanioJugadores - 1; i++)
	        {
	            for (int j = i + 1; j < tamanioJugadores; j++)
	            {
//	            	cout << "VALORES POR INDICE" << jugadores[i].Puntos << endl;
	            	
	            	if(valorRepetido  == jugadores[i].Puntos && jugadores[i].Puntos == jugadores[j].Puntos){
	            		
//	            		cout << "VALOR REPETIDO: "<< valorRepetido << endl;
//	            		cout << "INDICE VALOR REPETIDO: " << i << endl;
		            	auxiliarNamei = jugadores[i].Nombre;
		                auxiliarNamej = jugadores[j].Nombre;
		                transform(auxiliarNamei.begin(), auxiliarNamei.end(), auxiliarNamei.begin(), ::tolower);
		                transform(auxiliarNamej.begin(), auxiliarNamej.end(), auxiliarNamej.begin(), ::tolower);
		                
		                if (auxiliarNamei > auxiliarNamej)
		                {
		                    Persona temp = jugadores[i];
		                    jugadores[i] = jugadores[j];
		                    jugadores[j] = temp;
		                }	
					}
	                
	            }
	        }
	        
	        cout << "Case " << caso << ":\n";
	            for (int i = 0; i < tamanioJugadores; i++)
	            {
	                cout << jugadores[i].Nombre << " " << jugadores[i].Puntos << endl;
	            }	
		}
		else if(contadorRepetidos == 1){
			
			string auxiliarNamei, auxiliarNamej;
	        for (int i = 0; i < tamanioJugadores - 1; i++)
	        {
	            for (int j = i + 1; j < tamanioJugadores; j++)
	            {
	                auxiliarNamei = jugadores[i].Nombre;
	                auxiliarNamej = jugadores[j].Nombre;
	                transform(auxiliarNamei.begin(), auxiliarNamei.end(), auxiliarNamei.begin(), ::tolower);
	                transform(auxiliarNamej.begin(), auxiliarNamej.end(), auxiliarNamej.begin(), ::tolower);
	                if (auxiliarNamei > auxiliarNamej)
	                {
	                    Persona temp = jugadores[i];
	                    jugadores[i] = jugadores[j];
	                    jugadores[j] = temp;
	                }
	            }
	        }
	
	            cout << "Case " << caso << ":\n";
	            for (int i = 0; i < tamanioJugadores; i++)
	            {
	                cout << jugadores[i].Nombre << " " << jugadores[i].Puntos << endl;
	            }	
		}
        

        caso += 1;
    }

    return 0;
}
