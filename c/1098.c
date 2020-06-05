//1098	Sequencia IJ 4	Accepted	C	0.000	28/04/2016 17:13:02
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float I[3]={0,0,0}, J[3]={1,2,3};
	int l=0, k=0;

	do
	{
	    if(k==0 || k==5 || k==10)
        {
            for(l=0; l<3;l++)
            {

                printf("I=%d J=%d\n", (int)I[l], (int)J[l]);
                I[l]+=0.2;
                J[l]+=0.2;
            }
        }
        else
        {
            for(l=0; l<3;l++)
            {
                printf("I=%.1f J=%.1f\n", I[l], J[l]);
                I[l]+=0.2;
                J[l]+=0.2;
                if(k==9)
                    J[l]+=0.2;
            }
        }
		k++;
	}while(k<11);
	return 0;
}