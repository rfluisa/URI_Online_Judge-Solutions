//1161	Soma de Fatoriais	Accepted	C	0.000	01/01/2017 15:01:37
#include <stdio.h>
#include <stdlib.h>

int main()
{

    long long int fn=1, fm=1;
    int n, m, i;

    while(scanf("%d %d", &n, &m) != EOF){

        fn = 1;
        fm = 1;


        if(m==0 || m==1)
            fm=1;
        else {
            for(i=1; i<=m; i++)
                fm*=i;
        }

        if(n==0 || n==1)
            fn=1;
        else {
            for(i=1; i<=n; i++)
                fn*=i;
        }
        printf("%lld\n", fn+fm);
    }
    return 0;
}