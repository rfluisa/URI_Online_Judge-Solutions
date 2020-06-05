//1028	Figurinhas	Accepted	C	0.016	05/01/2017 01:04:29
#include <stdio.h>
#include <stdlib.h>

main()
{
    int i=0, k,n1,n2,resto;

    scanf("%d", &k);

    while(i<k) {

            scanf("%d %d", &n1, &n2);
            resto=n1%n2;

            while(resto!=0)
            {
                n1    = n2;
                n2    = resto;
                resto = n1%n2;
            }
            printf("%d\n", n2);
    i++;
    }
    return 0;
}