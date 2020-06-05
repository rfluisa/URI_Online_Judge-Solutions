//1239	Atalhos Bloggo	Accepted	C++	0.216	29/10/2019 10:06:41
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n[1000000];
    int size=0, sFlag=0, uFlag=0;
    
    while(getline(cin, n[size])){
        size++;
    }
    for(int i=0; i<=size; i++){
        
        for(int j=0; j<n[i].size(); j++){
            if(n[i][j] == '_'){
                if(uFlag == 0){
                    cout << "<i>";
                    uFlag = 1;
                }else{
                    cout << "</i>";
                    uFlag = 0;
                }
            }else if(n[i][j] == '*'){
                if(sFlag == 0){
                    cout << "<b>";
                    sFlag = 1;
                }else{
                    cout << "</b>";
                    sFlag = 0;
                }
            }else
                cout << n[i][j];
        }
        if(!(i == size && n[i] == ""))
        	cout << endl;
        	
    }
    

    return 0;
}