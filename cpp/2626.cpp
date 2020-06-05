//2626	Turma do JB6	Accepted	C++	0.000	12/01/2019 19:14:14
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char dodo[15], leo[15], pepper[15];
    
    while(cin >> dodo >> leo >> pepper){
        if((strcmp(dodo,leo) != 0 && strcmp(pepper,leo) != 0 && strcmp(pepper,dodo) != 0) || (strcmp(dodo,leo) == 0 && strcmp(pepper,leo) == 0))
            cout << "Putz vei, o Leo ta demorando muito pra jogar...\n";
        else{
            if(strcmp(dodo,"papel") == 0){
                
                if(strcmp(leo,"pedra") == 0){
                    
                    if(strcmp(pepper,leo) == 0) // a e e
                        cout << "Os atributos dos monstros vao ser inteligencia, sabedoria...\n";
                    else    // a e a
                        cout << "Putz vei, o Leo ta demorando muito pra jogar...\n";
                    
                } else if(strcmp(leo,"papel") == 0){
                    
                    if(strcmp(pepper,"pedra") == 0) // a a e
                        cout << "Putz vei, o Leo ta demorando muito pra jogar...\n";
                    else    // a a t
                        cout << "Urano perdeu algo muito precioso...\n";
                    
                }else { //leo = tesoura
                    
                    if(strcmp(pepper,leo) == 0) // a t t
                        cout << "Putz vei, o Leo ta demorando muito pra jogar...\n";
                    else    // a t a
                        cout << "Iron Maiden's gonna get you, no matter how far!\n";
                    
                }
                
            } else if(strcmp(dodo,"tesoura") == 0){
                
                if(strcmp(leo, "papel") == 0){
                    
                    if(strcmp(leo, pepper) == 0) // t a a
                        cout << "Os atributos dos monstros vao ser inteligencia, sabedoria...\n";
                    else    // t a t
                        cout << "Putz vei, o Leo ta demorando muito pra jogar...\n";
                    
                } else if(strcmp(leo, "pedra") == 0){
                    
                    if(strcmp(leo, pepper) == 0) // t e e
                        cout << "Putz vei, o Leo ta demorando muito pra jogar...\n";
                    else    // t e t
                        cout << "Iron Maiden's gonna get you, no matter how far!\n";
                    
                } else { // leo = tesoura
                    
                    if(strcmp(pepper,"papel") == 0) // t t a
                        cout << "Putz vei, o Leo ta demorando muito pra jogar...\n";
                    else    // t t e
                        cout << "Urano perdeu algo muito precioso...\n";
                }
            }else { //dodo = pedra
                
                if(strcmp(leo, "tesoura") == 0){
                    
                    if(strcmp(leo, pepper) == 0) // e t t
                        cout << "Os atributos dos monstros vao ser inteligencia, sabedoria...\n";
                    else    // e t e
                        cout << "Putz vei, o Leo ta demorando muito pra jogar...\n";
                    
                } else if(strcmp(leo, "pedra") == 0){
                    
                    if(strcmp(pepper, "papel") == 0) //e e a
                        cout << "Urano perdeu algo muito precioso...\n";
                    else    // e e t
                        cout << "Putz vei, o Leo ta demorando muito pra jogar...\n";
                    
                } else{ // leo = papel
                    
                    if(strcmp(leo, pepper) == 0) // e a a
                        cout << "Putz vei, o Leo ta demorando muito pra jogar...\n";
                    else    // e a e
                        cout << "Iron Maiden's gonna get you, no matter how far!\n";
                    
                }
                
            }
        }
    }

    return 0;
}