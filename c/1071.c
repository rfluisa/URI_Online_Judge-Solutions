//1071	Soma de Impares Consecuti...	Accepted	C	0.000	06/02/2016 16:56:35
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, i, soma=0;

    scanf("%i", &n1);
    scanf("%i", &n2);

    if(n1>n2)
    {
        i=n1;
        n1=n2;
        n2=i;
    }

    for(i=n1+1; i<n2; i++)
            if(i%2!=0)
                soma+=i;
    printf("%i\n", soma);

    return 0;
}