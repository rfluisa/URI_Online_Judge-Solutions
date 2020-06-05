//1581	Conversa Internacional	Accepted	C++	0.000	26/02/2020 20:47:27
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t, count=0;
    string name, name1;
    
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> t;
        
        cin >> name;
        name1 = name;
        
        for(int j=1; j<t; j++){
            
            cin >> name;
            
            if(count == 0){
                if(name1 != name)
                    count++;
            }
            
            name1 = name;
            
        }
        if(count > 0)
            cout << "ingles" << endl;
        else
            cout << name << endl;
            
        count = 0;
    }
    
    

    return 0;
}
