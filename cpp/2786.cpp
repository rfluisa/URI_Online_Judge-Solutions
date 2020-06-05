//2786	Piso da Escola	Accepted	C++	0.000	14/05/2019 00:57:16
#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b;
	
	cin >> a ;
	cin >> b;
	
	cout << a*b + (a-1)*+(b-1) << "\n";
	cout << (a+b-2)*2 << "\n";
	
	return 0;
}