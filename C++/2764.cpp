//2764	Entrada e Saída de Data	Accepted	C++	0.000	07/11/2018 18:51:45
#include <iostream>

using namespace std;

int main()
{
    string data;
    
    cin >> data;
    
    cout << data[3] << data[4] << "/" << data[0] << data[1] << "/" << data[6] << data[7] << "\n";
    cout << data[6] << data[7] << "/" << data[3] << data[4] << "/" << data[0] << data[1] << "\n";
    cout << data[0] << data[1] << "-" << data[3] << data[4] << "-" << data[6] << data[7] << "\n";

    return 0;
}