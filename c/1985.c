//1985	MacPRONALTS	Accepted	C	0.000	05/01/2017 01:56:53
#include <stdio.h>
#include <stdlib.h>

main()
{
    int i=0, k, p, q;
    double tot=0;

    scanf("%d", &k);

    while(i<k){

        scanf("%d %d", &p, &q);

        switch(p){
            case 1001:
                tot += 1.50*q;
                break;
            case 1002:
                tot += 2.50*q;
                break;
            case 1003:
                tot += 3.50*q;
                break;
            case 1004:
                tot += 4.50*q;
                break;
            case 1005:
                tot += 5.50*q;
                break;
        }


        i++;
    }

    printf("%.2lf\n", tot);


    return 0;
}