//1005	Média 1	Accepted	C	0.000	06/03/2015 08:59:48
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, B, MEDIA;
    scanf("%f", &A);
    scanf("%f", &B);
    MEDIA = ((A*3.5) + (B*7.5))/11;
    printf("MEDIA = %.5f\n", MEDIA);
    system("PAUSE");
    return 0;
}