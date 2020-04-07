
#include <iostream>
#include "conio.h"
using namespace std;

int casas(int n){
	int der,izq = 0;
	for(int i=n/2;i<=n;i++){
		izq = i*(i-1)/2;
		der = n*(n+1)/2 - i*(i+1)/2;
		if(der==izq){
			return i;
			break;
		}
	}
	return -1;
}

int main(){
	cout << casas(8);
}
