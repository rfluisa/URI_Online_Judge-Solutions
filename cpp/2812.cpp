//2812	Laércio	Accepted	C++	0.004	03/06/2020 20:32:59
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> seq;
    int n, m, aux, i;
    
    cin >> n;
    
    for(int j=0; j<n; j++){
        cin >> m;
        for(i=0; i<m; i++){
            cin >> aux;
            if(aux%2 != 0)
                seq.push_back(aux);
        }
        
        sort(seq.begin(), seq.end());
        
        long siz = seq.size();
        
        if(siz==1 && seq[0]%2!=0)
            cout << seq[0];
        else{
            long half = siz/2;
        
            for(i=0; i<half; i++){
                
                cout << seq[siz-1-i] << " ";
                cout << seq[i];
                if(i<half-1)
                    cout <<" ";
                
            }
            if(siz%2 != 0)
                cout << " " << seq[i];
        }
        
        cout << endl;
        
        
        seq.clear();
    }
    
    return 0;
}