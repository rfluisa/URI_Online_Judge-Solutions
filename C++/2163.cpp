//2163	O Despertar da Força	Accepted	C++	0.440	06/01/2019 13:40:55
#include <iostream>

using namespace std;

int main()
{
    int n, m, x=0, y=0, mat[1000][1000];
    
    cin >> n >> m;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
        }
    }
    
    for(int i=0; i<n; i++){ //y
        for(int j=0; j<m; j++){ //x
            if(mat[i][j] == 42){
                if( mat[i][j-1]   == 7 &&
                    mat[i][j+1]   == 7 &&
                    mat[i-1][j-1] == 7 &&
                    mat[i-1][j]   == 7 &&
                    mat[i-1][j+1] == 7 &&
                    mat[i+1][j-1] == 7 &&
                    mat[i+1][j]   == 7 &&
                    mat[i+1][j+1] == 7){
                        x = j;
                        y = i;
                        goto haha;
                    }
            }
        }
    }
    haha:
    if(y==0 && x==0)
        cout << "0 0\n";
    else
        cout << y+1 << " " << x+1 << "\n";

    return 0;
}