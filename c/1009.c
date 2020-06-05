//1009	Salário com Bônus	Accepted	C	0.000	11/03/2015 20:42:56
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[21];
    double sf, mt, t;
    scanf("%s", nome);
    scanf("%lf", &sf);
    scanf("%lf", &mt);
    t = sf+(mt*15/100);
    printf("TOTAL = R$ %.2lf\n", t);
    return 0;
}