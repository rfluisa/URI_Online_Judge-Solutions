//1160	Crescimento Populacional	Accepted	C	0.000	20/05/2016 13:31:59
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, k=0, pa, pb, anos=0;
    double GA, GB;

    scanf("%d", &t);

    do
    {

        scanf("%d %d %lf %lf", &pa, &pb, &GA, &GB);
        GA/=100;
        GA+=1;

        GB/=100;
        GB+=1;

        while(pa<=pb)
        {
            pa*=GA;
            pb*=GB;

            anos++;

            if(anos>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(anos<=100)
            printf("%i anos.\n", anos);

        anos=0;

        k++;
    }while(k<t);

}