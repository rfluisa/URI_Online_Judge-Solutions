//2003	Domingo de Manhã	Accepted	C	0.000	06/05/2019 22:21:59
#include <stdio.h>

int main()
{
    float h, m;

    while(scanf("%f:%f", &h, &m) != EOF){
        h*=60;
        h+=(m+60);

        if(h<=480)
            printf("Atraso maximo: 0\n");
        else
            printf("Atraso maximo: %.0f\n", h-480);
    }

    return 0;
}