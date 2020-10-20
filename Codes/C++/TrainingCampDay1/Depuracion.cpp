/* @JUDGE_ID:  P4N3L4  C++  "All-star Three-point Contest" */

/**************
 Solution to problem C, start programming contest
 by: P4N3L4

**************/

#include <bits/stdc++.h>

using namespace std;

struct Persona
{
    char Nombre[65];
    int Puntos;
    int Punto2;
} jugadores[102];

int main()
{

    int cantidadJugadores, indice = 0;
    string sentencia, nombre;
    // cin >> cantidadJugadores;

    // while (cantidadJugadores--)
    // {
    getline(cin, sentencia);
    cout << sentencia;
    int tamanio = sentencia.size();

    // char nombre[sentencia.size() + 10];
    char numeros[sentencia.size() + 10];

    int j = 0, suma = 0, indiceSubString = 0;
    int numeroPuntos = 0, indiceNumeros = 0, indiceJugadores = 0;
    bool flag = true;

    // Start line ------------------
    for (int i = 0; i <= sentencia.size() ; i++)
    {

        
        if (sentencia[i] == ';' && flag == true)
        {
            indiceSubString = i;
            flag = false;
        }

        if (sentencia[i] == '0' || sentencia[i] == '1')
        {
            if (sentencia[i] == '1' && j % 5 == 0 && j != 0)
            {
                cout << "\nValor de j cuando entra: " << j << endl;
                cout << "\nValor de i cuando entra: " << i << endl;
                suma += 2;
            }
            else if (sentencia[i] == '1')
            {
                suma += 1;
                j += 1;
            }

            numeroPuntos += 1;
            j += 1;
           
        }
        else if (numeroPuntos == 25)
        {
            numeros[indiceNumeros] = suma;
            indiceNumeros += 1;
            // suma = 0;
            numeroPuntos = 0;
            nombre = sentencia.substr(0, indiceSubString);
        }
    }
        cout << "\nLa suma es: " << suma;
        // }
        cout << "\nEL nombre es: " << nombre;
    
    return 0;
}
