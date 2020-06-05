//2717	Tempo do Duende	Accepted	C++	0.000	19/12/2018 23:42:24
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n, a, b;
  scanf("%i%i%i", &n, &a, &b);
  (a + b > n) ? puts("Deixa para amanha!") : puts("Farei hoje!");
  return 0;
}