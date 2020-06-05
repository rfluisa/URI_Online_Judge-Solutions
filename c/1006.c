//1006	Média 2	Accepted	C	0.000	06/03/2015 09:02:16
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, B, C, MEDIA;
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
    MEDIA = ((A*2) + (B*3) + (C*5))/10;
    printf("MEDIA = %.1f\n", MEDIA);
    system("PAUSE");
    return 0;
}