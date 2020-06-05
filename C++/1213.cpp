//1213	Ones	Accepted	C++	0.064	19/05/2020 23:48:35
#include <bits/stdc++.h>


using namespace std;
typedef long long ll;

int main()
{
	ll ans;
	
	int n;
	
	int tam;
	
	while (cin >> n)
	{
		ans = 1;
		tam = 1;
		while (ans % n != 0)
		{
			ans = ((ans % n) * (10 % n)) % n;
			ans = ((ans % n) + (1 % n)) % n;
			++tam;
		}
		cout << tam << '\n';
	}	
	
}