#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int n,v;
	cin >> n;
	set<int> s;
	for(int i=0;i<n;i++){
		cin>>v;
		s.insert(v);
	}
	
	if (*s.upper_bound(*s.begin()) != *s.begin() && *s.begin() != *s.rbegin()){
	
		cout << *(s.upper_bound(*s.begin())) <<endl;	
	}else{
		cout << "NO" <<endl;
	}

//	cout << *s.begin() << endl; 
//	cout << *s.rbegin() << endl;
	return 0;
}

