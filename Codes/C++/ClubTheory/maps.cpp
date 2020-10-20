#include <bits/stdc++.h>
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl '\n'
using namespace std;


int main(){FIN;

	map<int, string> mp;

	//Add elements with pair
	//pair<int, string> p1;
	//p1.first(1023);
	//p1.second("String_1");


	mp[1023] = "String_1";
	mp[1024] = "String_2";

	for(auto e: mp){
		cout << e.first << endl;
	}
	return 0;
}
