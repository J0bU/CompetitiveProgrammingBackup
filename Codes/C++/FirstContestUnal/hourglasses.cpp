#include <bits/stdc++.h>
#define endl '\n';

using namespace std;

int** createMatrix(int a, int b){
	int ** matrix = new int*[a];
	for(int i = 0; i<a; i++){
		matrix[i] = new int[b];
		for(int k = 0; k<b; k++ ){
			matrix[i][k] = i+k;
		}
	}
	
	return matrix;
}

void printMatrix(int** matrix, int a, int b){
	for(int i = 0; i<a; i++){
		for(int k = 0; k<b; k++){
			cout << matrix[i][k] << " ";
		}
		cout << endl;
	}
}

int main(){
	
	int** matrix = createMatrix(6,6);
	

	
	printMatrix(matrix, 6, 6);
	
	
	
	return 0;
}
