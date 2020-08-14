#include <bits/stdc++.h>


using namespace std;



void showdq(deque <int> g) 
{ 
    deque <int> :: iterator it; 
    for (it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
} 

int main(){
	
	int n, q, v, A, B,m;
	deque<int> d, d_1;
	int a[300000];
	
	cin >> n >> q;
	
	for(int i = 0 ; i<n; i++){
		cin >> v;
		d.push_back(v);
	}
	d_1 = d; // Copy deque 1.
	
	
	for (int k = 0; k<q; k++){
		cin >> m;
		a[k] = m;
 }
	for(int i = 0; i<q; i++){
		
		int repeticiones = a[i];
		
		for(int j = 0; j<repeticiones; j++){
		
			A = *d.begin();
			B = *(d.begin()+1);
			if(j == 0)continue;
			
			if(B > A ){
				d.erase(d.begin());
				d.push_back(A);
			}else{
				d.erase(d.begin()+1);
				d.push_back(B);
			}
	
		}
		//	cout << "Deque : "<< endl;
			cout << *d.begin() <<" "<<*(d.begin()+1 ) << endl;
			
		//	showdq(d);
		d = d_1;
		
	}
	
//	cout << d_1.size() << endl;
//	cout << *d.begin() << endl;

	return 0;
}
