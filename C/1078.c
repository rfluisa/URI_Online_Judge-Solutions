//1078	Tabuada	Accepted	C	0.000	23/03/2015 13:00:50
#include <stdio.h>
#include <stdlib.h>



int main()
{
    int i, n, r;
    scanf("%d",&n);
    if(n>2 && n<1000)
    {
        for (i=1;i<11;i++)
        {
            r=i*n;
            printf("%d x %d = %d\n",i,n,r);
        }
    }
    return 0;
}
