#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int n,e;
	cin>> n;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin >> e ;
		v.push_back(e);
	}
	
	for(int i = 0;i<n;i++){
		cout<< v[i] << endl;
	}

	
	return 0;
}
