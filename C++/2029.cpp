//2029	Reservatório de Mel	Accepted	C++	0.000	18/12/2018 10:38:34
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double v, d;
    while(cin >> v >> d){
        cout << "ALTURA = " << fixed << setprecision(2) << v/(3.14*(d/2)*(d/2)) << "\n";
        cout << "AREA = " << fixed << setprecision(2) << 3.14*(d/2)*(d/2) << "\n";
    }

    return 0;
}