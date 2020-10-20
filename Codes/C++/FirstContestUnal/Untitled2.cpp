#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl '\n'
using namespace std;


int main(){FIN;
	
	int t;
	bool choose_a = false;
	bool choose_b = false;
	cin >> t;
	while(t--){
		set<int> set_n;
		set<int> set_m;
		int n, m;
		cin >> n,m;
		for(int i=0; i<n; i++){
			int cell;
			cin >> cell;
			set_n.insert(cell);
		}
		for(int i = 0; i<m; i++){
			int cell;
			cin >> cell;
			set_m.insert(cell);
		}
		
		int size_n = set_n.size();
		int size_n = set_m.size();
		
		if(size_n == 1){
			choose_a = true;
		}else if(size_m == 1){
			choose_a = true;
		}
		
	}
	
	return 0;
}
