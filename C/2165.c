//2165	Tuitando	Accepted	C	0.000	01/01/2017 23:59:57
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[501];

    gets(palavra);

    if(strlen(palavra)<=140)
        printf("TWEET\n");
    else
        printf("MUTE\n");


    return 0;
}