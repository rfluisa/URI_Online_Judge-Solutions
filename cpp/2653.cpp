//2653	Dijkstra	Accepted	C++	0.188	15/02/2019 22:55:59
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> seq;
    string aux;
    
    while(cin >> aux){
        if (find(seq.begin(), seq.end(), aux) == seq.end()){
            seq.push_back(aux);
        }
    }
    
    cout << seq.size() << "\n";
    return 0;
}