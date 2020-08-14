#include <bits/stdc++.h>


using namespace std;


int main(){
	
	//priority_queue<char> q;
	vector<string> q;
	string s;
	cin >> s;

	
    
	size_t pos = 0;
	string token;
	string delimiter = "+";
	while ((pos = s.find(delimiter)) != string::npos) {
	    token = s.substr(0, pos);
	    
	    cout << token << endl;
	    s.erase(0, pos + delimiter.length());
	    q.push_back(token);
	}
//	
	while(!q.empty()){
		cout << q.front() <<endl;
		q.erase(q.begin());
	}

//for(int i = 0; i<s.size(); i++){
//	if(s[i] != '+'){
//		char valor = s[i];
//		q.push(valor);
//	}
//}
//
//while(!q.empty()){
//	cout << " " <<q.top();
//	q.pop();
//}
  return 0;
}

