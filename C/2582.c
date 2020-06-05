//2582	System of a Download	Accepted	C	0.000	17/08/2017 05:41:16
#include <stdio.h>
 
int main(void) {
	int a, b, n, k=0;
	
	scanf("%d", &n);
	
	while(k<n){
		
		scanf("%d %d", &a, &b);
		
		switch(a+b){
			case 0:
				printf("PROXYCITY\n");
				break;
			case 1:
				printf("P.Y.N.G.\n");
				break;
			case 2:
				printf("DNSUEY!\n");
				break;
			case 3:
				printf("SERVERS\n");
				break;
			case 4:
				printf("HOST!\n");
				break;
			case 5:
				printf("CRIPTONIZE\n");
				break;
			case 6:
				printf("OFFLINE DAY\n");
				break;
			case 7:
				printf("SALT\n");
				break;
			case 8:
				printf("ANSWER!\n");
				break;
			case 9:
				printf("RAR?\n");
				break;
			case 10:
				printf("WIFI ANTENNAS\n");
				break;
		}
		
		k++;
	}
 
	return 0;
}