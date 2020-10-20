#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, number = 0;
	cin >> n;
	int arreglo[n];

	for(int i=0;i<n;i++){
		cin >> number;
		arreglo[i] = number;
	}
	
	for(int i = n-1;i>=0;i--){
		cout << arreglo[i] << " ";
	}
 

	return 0;
}

