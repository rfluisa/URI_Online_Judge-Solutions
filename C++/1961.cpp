//1961	Pula Sapo	Accepted	C++	0.000	11/12/2018 19:29:54
#include <iostream>

using namespace std;

int main()
{
    int h, pipes, i=0, current, old, lose=0;
    
    cin >> h >> pipes;
    
    while(i < pipes){
        
        old = current;
        
        cin >> current;
        
        if(i==0)
            old = current;
            
        if(old > current && (old - current) > h)
                lose = 1;
        else if(old < current && (current - old) > h)
                lose = 1;
        
        i++;
    }
    
    if(lose == 1)
        cout << "GAME OVER\n";
    else
        cout << "YOU WIN\n";
    
    return 0;
}
