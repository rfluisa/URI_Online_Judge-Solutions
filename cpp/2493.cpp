//2493	Jogo do Operador	Accepted	C++	0.000	15/05/2019 18:54:46
#include <bits/stdc++.h>

using namespace std;

struct Operations{
    int x, y, r;
};

int main()
{
    vector<Operations> op;
    int n, a, b, c;
    char o;
    string name;
    vector<string> names;
    
    while(cin >> n){
        
        for(int i=0; i<n; i++){
            scanf("%i %i=%i", &a, &b, &c);
            op.push_back({a, b, c});
        }
        
        for(int i=0; i<n; i++){
            cin >> name >> a >> o;
            
            switch(o){
                case '+':
                    if((op[a-1].x + op[a-1].y) != op[a-1].r)
                        names.push_back(name);
                    break;
                case '*':
                    if((op[a-1].x * op[a-1].y) != op[a-1].r)
                        names.push_back(name);
                    break;
                case '-':
                    if((op[a-1].x - op[a-1].y) != op[a-1].r)
                        names.push_back(name);
                    break;
                case '/':
                    if((op[a-1].x / op[a-1].y) != op[a-1].r)
                        names.push_back(name);
                    break;
                case 'I':
                    if((op[a-1].x + op[a-1].y) == op[a-1].r  || 
                        (op[a-1].x - op[a-1].y) == op[a-1].r || 
                        (op[a-1].x / op[a-1].y) == op[a-1].r ||
                        (op[a-1].x * op[a-1].y) == op[a-1].r)
                        names.push_back(name);
                    break;
            }
        }
        
        if(names.size() == 0)
            cout << "You Shall All Pass!\n";
        else if(names.size() == n){
            cout << "None Shall Pass!\n";
            names.clear();
        }else{
            sort(names.begin(), names.end());
            for(int i=0; i<names.size(); i++){
                cout << names[i];
                if(i<names.size()-1)
                    cout << " ";
                else
                    cout << "\n";
            }
            names.clear();
        }
        
        op.clear();
        
    }

    return 0;
}
