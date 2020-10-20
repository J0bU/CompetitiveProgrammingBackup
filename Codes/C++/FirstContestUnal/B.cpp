/* @JUDGE_ID:  P4N3L4  C++  "Sea Battle" */

/**************
 Solution to problem B, start programming contest
 by: P4N3L4

**************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // ------------- Documentación código creado ------------- 
    
    // Inicialmente se declaran las variables que proporciona el ejercicio, en este caso:
    // w1: ancho del rectángulo 1
    // w2: ancho del rectángulo 2
    // h1 - h2: Altura del rectángulo 1 y rectángulo 2 respectivamente
    // w1 >= w2.
    int w1, h1, w2, h2;

    // Se reciben estos valores que proporcionará el juez.
    cin >> w1 >> h1 >> w2 >> h2;

    // cantidadEspacioBarco: Representa el total que ocupará el barco en el tablero.
    // Supongamos que se tiene un barco donde sus dimensiones son w1 = 2, h1 = 1, w2 = 2, h2 = 1
    // Representación: Sin embargo el ejercicio solicita las posiciones adyacentes, por lo que el valor sería 12.
    // Lo que se hace para solucionar esto es generar una matriz de tal manera que ocupe todos los espacios
    // y finalmente se calcula la cantidad de ceros que hay.
    // 0 0 0          1 1 0 0
    // 0 1 0 0        1 1 0 0
    // 0 1 1 0        0 0 0 0  Ilustración rejilla. 
    // 0 0 0 0        0 0 0 0 
    int cantidadEspacioBarco = (h1 + h2) * w1;

    // resultado: Lo que se hace acá es calcular el tamaño de la rejilla, en este caso de 16 posiciones
    // a partir de los valores de las alturas multiplicado por el valor del ancho, y a esta cantidad
    // de posiciones se resta con el valor de la cantidad que ocupa el barco en dicha rejilla.
    int resultado = ((h1 + h2 + 2) * (w1 + 2)) - cantidadEspacioBarco;
    cout << resultado;

    // ------------- El código comentado funciona pero no es óptimo ya que su complejidad es O(n^2)
    // mientras que el código actual tiene compejidad O(1) por lo que sólo consume 31ms en ejecución -----------------

    // int nScores[h1 + h2 + 2][w1 + 2];     // none of the values in nScores
    //                                       // known until you initialize them

    // for (int i = 0; i < h1 + h2 + 2; i++) // ...initialize it

    // {
    //     for (int j = 0; j < w1 + 2; j++)
    //     {

    //         nScores[i][j] = 0;
    //     }
    // }

    // // Completado matriz.
    // int restante = w1 - w2;
    // //Se añade el faltante a w2 para implementar la matriz.
    // w2 = w2 + restante;

    // int coordenada_1 = 0;
    // for (int i = 0; i < h1 + h2 ; i++) // ...initialize it
    // {
    //     for (int j = 0; j < w1 ; j++)
    //     {
    //         nScores[i][j] = 1;
    //         coordenada_1  += 1;

    //     }
    // }

    // int resultado = ((h1 + h2 + 2)*(w1 +  2)) - coordenada_1;

    // cout << "\tMatriz";

    // for (int i = 0; i < h1 + h2 + 2; i++) // ...initialize it
    // {
    //     cout << "\n";
    //     for (int j = 0; j < w1 + 2; j++)
    //     {

    //         cout << " " << nScores[i][j];
    //     }
    // }

    return 0;
}
