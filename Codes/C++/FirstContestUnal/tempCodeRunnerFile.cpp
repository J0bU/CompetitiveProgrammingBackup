/* @JUDGE_ID:  P4N3L4  C++  "All-star Three-point Contest" */

/**************
 Solution to problem C, start programming contest
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

    // CantidadJugador: Representa la cantidad de jugadores que serán ingresados.
    //TamanioJugadores: Será una copia de la cantidad de jugadores ingresados.
    int cantidadJugadores, tamanioJugadores, caso = 1;

    //Se usará un set para saber si los números son repetidos o no
    //debido a la condición del set de que si son repetidos no se almacenan
    //por ende finalmente si sólo tenemos un valor en el set es que los jugadores
    //ingresados tuvieron puntos repetidos.
    set<int> repetidos;

    //sentencia: almacenará la cadena que proporciona el juez.
    string sentencia, nombre;

    // cin >> cantidadJugadores;

    // tamanioJugadores = cantidadJugadores;

    //Ciclo que tomará la cantidad de jugadores y procesará cada uno de estos
    //a partir de la cantidad ingresada.

    while (cin >> cantidadJugadores)
    {
        cin.ignore();

        tamanioJugadores = cantidadJugadores;

        for (int k = 0; k < cantidadJugadores; k++)
        {
            getline(cin, sentencia, '\n');

            // Se toma el tamaño de la sentencia para luego saber hasta dónde
            // va el for.
            int tamanio = sentencia.size();

            //Se inicializan variables importantes
            int j = 1, suma = 0, indiceSubString = 0;
            int numeroPuntos = 0;
            bool flag = true;

            // Start line ------------------
            for (int i = 0; i < sentencia.size(); i++)
            {

                if (sentencia[i] == ';' && flag == true)
                {
                    indiceSubString = i;
                    flag = false;
                }

                if (sentencia[i] == '0' || sentencia[i] == '1')
                {

                    if (sentencia[i] == '1' && j == 5)
                    {

                        suma += 2;
                        j = 1;
                        numeroPuntos += 1;
                    }
                    else if (sentencia[i] == '1')
                    {
                        suma += 1;
                        j += 1;
                        numeroPuntos += 1;
                    }
                    else
                    {
                        numeroPuntos += 1;
                        j += 1;
                    }
                }
            }
            nombre = sentencia.substr(0, indiceSubString);
            // transform(nombre.begin(), nombre.end(), nombre.begin(), ::tolower);
            jugadores[k].Nombre = nombre;
            jugadores[k].Puntos = suma;

            suma = 0;
        }

        // cout << jugadores[0].Puntos << endl;
        // cout << jugadores[1].Puntos << endl;
        // cout << jugadores[2].Puntos << endl;
        int contadorRepetidos = 0;
        for (int i = 0; i < tamanioJugadores - 1; i++)
        {

            // repetidos.insert(jugadores[i].Puntos);

            for (int j = i + 1; j < tamanioJugadores; j++)
            {
                if (jugadores[i].Puntos != jugadores[j].Puntos)
                    contadorRepetidos += 1;
                if (jugadores[i].Puntos < jugadores[j].Puntos)
                {

                    struct Persona temp = jugadores[i];
                    jugadores[i] = jugadores[j];
                    jugadores[j] = temp;
                }
            }
        }

        // Diferentes puntos -----------------
        if (contadorRepetidos == tamanioJugadores)
        {
            cout << "Case " << caso << ":\n";
            for (int i = 0; i < tamanioJugadores; i++)
            {
                cout << jugadores[i].Nombre << " " << jugadores[i].Puntos << endl;
            }
        }

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

        // Mimsmos puntos -------
        if (contadorRepetidos != tamanioJugadores)
        {

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