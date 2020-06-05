//1983	O Escolhido	Accepted	C++	0.000	13/12/2018 19:37:04
#include <iostream>

using namespace std;

int main()
{
    int students, reg, beststudent;
    float score, highestscore;
    
    cin >> students;
    
    for(int i=0; i<students; i++){
        
        cin >> reg >> score;
        
        if(i==0){
            highestscore = score;
            beststudent = reg;
        }
        else if(score > highestscore){
            highestscore = score;
            beststudent = reg;
        }
    }
    
    if(highestscore >= 8)
        cout << beststudent << "\n";
    else
        cout << "Minimum note not reached\n";

    return 0;
}