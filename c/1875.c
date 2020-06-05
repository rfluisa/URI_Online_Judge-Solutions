//1875	Tribol	Accepted	C	0.000	10/05/2016 15:35:26
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testes, gols, i, k=0;
    int BLUE=0, GREEN=0, RED=0;
    char m, s;

    scanf("%d", &testes);

    do
    {
        scanf("%d", &gols);

        for(i=0;i<gols;i++)
        {
            scanf(" %c %c", &m, &s);
            switch(m)
            {
                case 'G':
                {
                    if(s=='R')
                        GREEN++;
                    else if(s=='B')
                        GREEN+=2;
                    break;
                }
                case 'R':
                {
                    if(s=='B')
                        RED++;
                    else if(s=='G')
                        RED+=2;
                    break;
                }
                case 'B':
                {
                    if(s=='R')
                        BLUE+=2;
                    else if(s=='G')
                        BLUE++;
                    break;
                }
            }
        }

        if(BLUE == RED && BLUE == GREEN)
           printf("trempate\n");
        else if((BLUE == RED && RED+BLUE!=0) || (BLUE == GREEN  && BLUE+GREEN!=0) || (RED == GREEN && RED+GREEN!=0))
            printf("empate\n");
        else if(BLUE>RED && BLUE>GREEN)
            printf("blue\n");
        else if(RED>BLUE && RED>GREEN)
            printf("red\n");
        else
            printf("green\n");

        BLUE = 0;
        RED = 0;
        GREEN = 0;

        k++;
    }while(k<testes);
    return 0;
}