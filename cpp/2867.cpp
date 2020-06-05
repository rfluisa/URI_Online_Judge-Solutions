//2867	Dígitos	Accepted	C++	0.184	03/05/2019 02:14:06
#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int i, n, m, res=1, tests;
	
	cin >> tests;
	
	while(tests > 0){
		cin >> n >> m;
	
		for(i=0; res!=0; i++){
			res = pow(n,m)/pow(10,i);
		}
		
		res = 1;
		cout << i-1 << "\n";
		tests--;
	}
	
	return 0;
}