//2863	Umil Bolt	Accepted	C	0.000	22/11/2018 21:18:09
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int tests, i;
    float time, fastest=11;

    while(scanf("%i", &tests) != EOF){
        for(i=0; i<tests; i++){
            scanf("%f", &time);
            if(time<fastest)
                fastest = time;
        }
        printf("%.2f\n", fastest);
        fastest = 11;
    }

    return 0;
}