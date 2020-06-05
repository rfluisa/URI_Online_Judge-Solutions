//2176	Paridade	Accepted	C	0.000	01/11/2019 01:49:02
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    
    char s[10000];
    int i, ones = 0;
    
    scanf(" %s", &s);
    
    for(i=0; i<strlen(s); i++){
        if(s[i] == '1')
            ones++;
    }
    
    if(ones%2 == 0)
        printf("%s0\n", s);
    else
        printf("%s1\n", s);

  return 0;
}