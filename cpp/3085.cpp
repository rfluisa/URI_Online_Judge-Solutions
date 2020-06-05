//3085	O Grande Dia	Accepted	C++	0.000	28/05/2020 22:34:50
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    double n, k, x1, y1, x2=0, y2=0, h, count=1;
    char aux;
   
    cin >> n >> k >> x1 >> y1;
   
    h = pow(pow(x1-x2,2)+pow(y1-y2,2),0.5);
   
    while(h < k && count <= n){
       
        cin >> aux;
       
        switch(aux){
            case 'D':
                x2++;
                break;
            case 'E':
                x2--;
                break;
            case 'C':
                y2++;
                break;
            case 'B':
                y2--;
                break;
        }
 
    //cout << "PROCESSEI " << aux << endl;
       
        count++;
       
        h = pow(pow(x1-x2,2)+pow(y1-y2,2),0.5);
    }
 
    count = min(count, n);
 
    //cout << x2 << " " << y2 << endl;
    //cout << x1 << " " << y1 << endl;
    //cout << h << endl;
   
    if(h != 0)
        cout << "Trap " << count << endl;
    else
        cout << "Sucesso" << endl;
 
    return 0;
}