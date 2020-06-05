//1064	Positivos e Média	Accepted	C	0.000	01/10/2015 15:21:47
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    float j=0, valores[6], positivos[6];
    int i, k=0;
 
    for(i=0; i  <6; i++)
    {
        scanf("%f", &valores[i]);
        if(valores[i]>0)
        {
            positivos[k] = valores[i];
            k++;
        }
    }
    printf("%i valores positivos\n", k);
    for(i=0; i<k; i++)
        j+=positivos[i];
    printf("%.1f\n", j/k);
 
    return 0;
}