//1049	Animal	Accepted	C	0.000	27/06/2015 17:00:11
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    char tipo1[]= "vertebrado", tipo2[]= "invertebrado", especie1[]= "ave", especie2[]= "mamifero", especie3[]= "inseto", especie4[]= "anelideo",
alimento1[]= "carnivoro", alimento2[]= "onivoro", alimento3[]= "herbivoro", alimento4[]= "hematofago", tipo[50], especie[50], alimento[50];
    fflush(stdin);
    gets(tipo);
    gets(especie);
    gets(alimento);
    

    if(strcmp(tipo1, tipo) == 0)
    {
	if(strcmp(especie1, especie) == 0)
	{
		if(strcmp(alimento1, alimento) == 0)
			printf("aguia\n");
		else if(strcmp(alimento2, alimento) == 0)
			printf("pomba\n");
	}
	else if(strcmp(especie2, especie) == 0)
	{
		if(strcmp(alimento2, alimento) == 0)
			printf("homem\n");
		else if(strcmp(alimento3, alimento) == 0)
			printf("vaca\n");
	}
     }
     else if(strcmp(tipo2, tipo) == 0)
     {
	if(strcmp(especie3, especie) == 0)
	{
		if(strcmp(alimento4, alimento) == 0)
			printf("pulga\n");
		else if(strcmp(alimento3, alimento) == 0)
			printf("lagarta\n");
	}
	else if(strcmp(especie4, especie) == 0)
	{
		if(strcmp(alimento4, alimento) == 0)
			printf("sanguessuga\n");
		else if(strcmp(alimento2, alimento) == 0)
			printf("minhoca\n");
	}
     }

    return 0;
}