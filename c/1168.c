//1168	LED	Accepted	C	0.000	01/11/2019 01:46:51
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main ()
{
  int n, i, j;
  long int sum = 0;
  char leds[10000000];

  scanf("%i", &n);

  for(i=0; i<n; i++){

    scanf(" %[^\n]%*c", &leds);

    for(j=0; j<strlen(leds); j++){

        switch(leds[j]){
        case '1':
            sum += 2;
            break;
        case '7':
            sum += 3;
            break;
        case '4':
            sum += 4;
            break;
        case '2':
        case '3':
        case '5':
            sum += 5;
            break;
        case '6':
        case '9':
        case '0':
            sum += 6;
            break;
        case '8':
            sum += 7;
            break;
        }
    }


    printf("%i leds\n", sum);
    sum = 0;
  }

  return 0;
}