#include <bits/stdc++.h>

using namespace std;

int main(){
	int N1,N2;
	cin >> N1 >> N2;
	
	if(N1 > N2){
		cout << N1-N2 << "\n";
	}else {
		cout << N1+N2 << "\n";
	}
	
	
	return 0;
}
