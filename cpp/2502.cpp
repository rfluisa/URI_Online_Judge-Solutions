//2502	Decifrando a Carta Cripto...	Accepted	C++	0.004	30/11/2019 22:42:25
#include <bits/stdc++.h>

using namespace std;

int main(){

    int size, tests;

    while(cin >> size >> tests){
        cin.ignore();
        string word, crypto;
        getline(cin,word);
        getline(cin,crypto);
        
        map<char,char> cifra;
        map<char,char>::iterator it;

        for(int j=0; j<size; j++){
            if((word[j]<='z' && word[j]>='a' || word[j]<='Z' && word[j]>='A') &&
            (crypto[j]<='z' && crypto[j]>='a' || crypto[j]<='Z' && crypto[j]>='A'))
            {
                cifra.insert(pair<char,char>(tolower(word[j]), tolower(crypto[j])));
                cifra.insert(pair<char,char>(tolower(crypto[j]),tolower(word[j])));
                cifra.insert(pair<char,char>(toupper(crypto[j]),toupper(word[j])));
                cifra.insert(pair<char,char>(toupper(word[j]), toupper(crypto[j])));
            }else{
                if(!(word[j]<='z' && word[j]>='a' || word[j]<='Z' && word[j]>='A')){
                    if(crypto[j]<='z' && crypto[j]>='a' || crypto[j]<='Z' && crypto[j]>='A'){
                        cifra.insert(pair<char,char>(word[j], tolower(crypto[j])));
                        cifra.insert(pair<char,char>(tolower(crypto[j]), word[j]));
                        cifra.insert(pair<char,char>(toupper(crypto[j]), word[j]));
                    }else{
                        cifra.insert(pair<char,char>(word[j], crypto[j]));
                        cifra.insert(pair<char,char>(crypto[j], word[j]));
                    }
                }else{
                    cifra.insert(pair<char,char>(crypto[j], tolower(word[j])));
                    cifra.insert(pair<char,char>(tolower(word[j]), crypto[j]));
                    cifra.insert(pair<char,char>(toupper(word[j]), crypto[j]));
                }
            }
            
        }
        
        /*for(auto& x: cifra){
            cout << x.first << " " << x.second << endl;
        }*/

        for(int i=0; i<tests; i++){

            string sentence;
            getline(cin, sentence);
            
            int k=0;
            
            while(k<sentence.length()){
                
                it = cifra.find(sentence[k]);
                char aux;
                if(it != cifra.end())
                    cout << cifra[sentence[k]];
                else
                    cout << sentence[k];
                
                k++;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}