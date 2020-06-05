//1013	O Maior	Accepted	C	0.000	12/04/2015 22:52:41
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, f;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b&&a>c)
        printf("%d eh o maior\n",a);
    else if(b>a&&b>c)
        printf("%d eh o maior\n",b);
    else if (c>a && c>b)
        printf("%d eh o maior\n",c);
    return 0;
}