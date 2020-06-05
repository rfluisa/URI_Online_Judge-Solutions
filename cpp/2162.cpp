//2162	Picos e Vales	Accepted	C++	0.000	20/01/2019 03:39:27
#include <iostream>

using namespace std;

int main()
{
    int n, num[100];
    bool res=true, valley;
    
    cin >> n;
    
    if(n == 1)
        cout << "1\n";
    else if(n == 2){
        cin >> num[0] >> num[1];
        
        if(num[0] != num[1])
            cout << "1\n";
        else
            cout << "0\n";
        
    }else{
        for(int i=0; i<n; i++)
            cin >> num[i];
        
        if(num[0] > num[1])
            valley = true;  // 10 8 9
        else if(num[0] < num[1])
            valley = false;  // 0 2
        else
            res = false;  // 0 0
            
        if(res){
            for(int i=2; i<n; i++){
                if(valley){
                    
                    if(i%2 == 0){
                        
                        if(num[i]<=num[i-1]){
                            res = false;
                            break;
                        }
                        
                    }else{
                        
                        if(num[i]>=num[i-1]){
                            res = false;
                            break;
                        }
                        
                    }
                    
                }else{
                    
                    if(i%2 == 0){
                        
                        if(num[i]>=num[i-1]){
                            res = false;
                            break;
                        }
                        
                    }else{
                        
                        if(num[i]<=num[i-1]){
                            res = false;
                            break;
                        }
                        
                    }
                    
                }
            }
        }
        
        if(res)
            cout << "1\n";
        else
            cout << "0\n";
        
    }
    
    return 0;
}