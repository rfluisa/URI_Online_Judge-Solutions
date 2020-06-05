//2930	TCC da Depressão Natalino	Accepted	C++	0.000	03/05/2019 01:56:31
#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n, m;
	
	cin >> n >> m;
	
	if(n>m)
		cout << "Eu odeio a professora!\n";
	
	else if(n<=m-3)
		cout << "Muito bem! Apresenta antes do Natal!\n";
	else{
		cout << "Parece o trabalho do meu filho!\n";
		if(n+2>=24)
			cout << "Fail! Entao eh nataaaaal!\n";
		else
			cout << "TCC Apresentado!\n";
	}
	return 0;
}