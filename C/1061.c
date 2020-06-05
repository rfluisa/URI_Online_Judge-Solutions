//	1061	Tempo de um Evento	Accepted	C	0.000	09/01/2017 02:25:59
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d1, d2, h1, h2, m1, m2, s1, s2;
    int T, ti, tf;
    char dia[5];

    scanf("%s %d", &dia, &d1);
    scanf("%d : %d : %d", &h1, &m1, &s1);

    scanf("%s %d",&dia, &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);

    T = (d2-d1)*86400;

    ti = h1*3600 + m1*60 + s1;
    tf = h2*3600 + m2*60 + s2;

    if(T==0)
        T=tf-ti;
    else {
        T-=ti;
        T+=tf;
    }


    printf("%d dia(s)\n", T/86400);
    T=T%86400;
    printf("%d hora(s)\n", T/3600);
    T=T%3600;
    printf("%d minuto(s)\n", T/60);
    T=T%60;
    printf("%d segundo(s)\n", T);

    return 0;
}