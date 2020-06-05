//2779	Álbum da Copa	Accepted	C++	0.000	14/05/2019 22:52:52
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c, aux;
    vector<int> cards;
    vector<int>::iterator it;
    
    cin >> n >> c;
    
    for(int i=0; i<c; i++){
        cin >> aux;
        if(find(cards.begin(), cards.end(), aux) == cards.end())
            cards.push_back(aux);
    }
    
    cout << n-cards.size() << "\n";
    
    return 0;
}