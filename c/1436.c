//1436	Jogo do Tijolo	Accepted	C	0.000	08/04/2015 20:19:02
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, z, r, id, testes;
	scanf("%d", &testes);

	for(i=1;i<=testes;i++)
	{
		scanf("%d", &z);
		for(j=0;j<z;j++)
		{
			scanf("%d", &id);
			if(j==z/2)
                r=id;
		}
	printf("Case %d: %d\n", i, r);
	}

return 0;
}