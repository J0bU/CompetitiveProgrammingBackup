/* @JUDGE_ID:  11172  C++  "Relational Operator" */

/**************
 solution to problem 11172, Duke ACM Internet programming contest
 by: J0bU
 date: 30/05/19

**************/


#include <bits/stdc++.h>



using namespace std;

int main()
{
    int nDatos, value1, value2;
    cin>>nDatos; //Se pide el número de datos.

    deque<int> cola;
    for(int i = 0; i<nDatos; i++){
        cin>>value1;
        cin>>value2;

        cola.push_back(value1);
        cola.push_back(value2);

    }

    for(int i = 0; i<nDatos; i++){
        if(cola[i] > cola[i+1]){
            cout<<">"<<endl;
            cola.pop_front();
            }
        else if(cola[i] < cola[i+1]){
            cout<<"<"<<endl;
            cola.pop_front();
            }
        else {
            cout<<"="<<endl;
            cola.pop_front();}
    }



    return 0;
}
