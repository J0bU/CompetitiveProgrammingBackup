#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n,R,c;
	
	cin >> n;
	c = 0;
	for(int i=1;i<=n;i++){
		
		cin>>R;
		
		if(R == 1) c += 1;
		
	}
	
	if(c!=0){
		cout << "HARD" << endl;
	}else{
		cout << "EASY" << endl;
	}
	
	
	
	return 0;
}

