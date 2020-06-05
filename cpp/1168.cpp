//1168	LED	Accepted	C++	0.012	17/10/2018 02:24:41
#include <iostream>
#include <string>
#include <algorithm>

int main ()
{
  int n;
  long int sum = 0;
  std::string leds;

  std::cin >> n;

  for(int i=0; i<n; i++){

    std::cin >> leds;

    for(int j=0; j<leds.size(); j++){

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


    std::cout << sum << " leds\n";
    sum = 0;
  }

  return 0;
}