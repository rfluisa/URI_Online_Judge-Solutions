//2968	Hora da Corrida	Accepted	C++	0.000	26/05/2020 22:37:25
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    double tot;
    
    cin >> n >> m;
    
    tot = n*m;
    
    printf("%.0f %.0f %.0f %.0f %.0f %.0f %.0f %.0f %.0f\n", ceil(tot*0.1),ceil(tot*0.2),
    ceil(tot*0.3),ceil(tot*0.4),ceil(tot*0.5),ceil(tot*0.6),ceil(tot*0.7),
    ceil(tot*0.8),ceil(tot*0.9));

    return 0;
}