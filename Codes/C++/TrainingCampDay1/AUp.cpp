#include <bits/stdc++.h>

using namespace std;


int main(){
	
	set<int> s;
	int n, v;
	
	cin>>n;
	for(int i=0; i<n;i++){
		cin>>v;
		s.insert(v);
	}
	
	s.erase(s.begin());
	
	if(s.size() == 0){
		cout<<"NO"<<endl;
		
	}else{
		cout<<*s.begin()<<endl;
	}
	
	
	return 0;
}
