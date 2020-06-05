//1040	Média 3	Accepted	C	0.000	20/06/2015 00:12:24
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, n4, ne, media;
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    scanf("%f",&n4);

    media = (n1*0.2)+(n2*0.3)+(n3*0.4)+(n4*0.1);

    if(media >= 7.0)
    {
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
    }
    else if(media < 5.0)
    {
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Media: %.1f\n", media);
        printf("Aluno em exame.\n");
        scanf("%f",&ne);
        printf("Nota do exame: %.1f\n", ne);
        media = (media + ne)/2;
        if(media >= 5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", media);
        }
        else
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", media);
        }
    }
    return 0;
}