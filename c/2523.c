//2523	A Mensagem de Will	Accepted	C	0.004	17/10/2017 07:30:08
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    char alphabet[26];
    int vet[10000], i, aux, n;
 
    while(scanf(" %c", &alphabet[0]) != EOF){
        for(i=1; i<26; i++)
            scanf(" %c", &alphabet[i]);

 
        scanf("%d", &n);
 
        for(i=0; i<n; i++)
            scanf("%d", &vet[i]);
 
 
        for(i=0; i<n ; i++)
            printf("%c", alphabet[(vet[i]-1)]);
        printf("\n");
    }
 
    return 0;
}