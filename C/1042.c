//1042	Sort Simples	Accepted	C	0.000	20/04/2015 21:47:57
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n1, n2, n3;
    scanf("%i",&n1);
    scanf("%i",&n2);
    scanf("%i",&n3);

    if(n1<n2 && n1<n3)
    {
        printf("%i\n",n1);
        if(n2<n3)
        {
            printf("%i\n",n2);
            printf("%i\n",n3);
        }
        else if(n3<n2)
        {
            printf("%i\n",n3);
            printf("%i\n",n2);
        }
    }
    else if(n2<n1 && n2<n3)
    {
        printf("%i\n",n2);
        if(n1<n3)
        {
            printf("%i\n",n1);
            printf("%i\n",n3);
        }
        else if(n3<n1)
        {
            printf("%i\n",n3);
            printf("%i\n",n1);
        }
    }
    else if(n3<n2 && n3<n1)
    {
        printf("%i\n",n3);
        if(n2<n1)
        {
            printf("%i\n",n2);
            printf("%i\n",n1);
        }
        else if(n1<n2)
        {
            printf("%i\n",n1);
            printf("%i\n",n2);
        }
    }

    printf("\n%i\n",n1);
    printf("%i\n",n2);
    printf("%i\n",n3);

    return 0;
}