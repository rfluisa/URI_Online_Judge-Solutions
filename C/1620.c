//1620	Triangulação de Delaunay	Accepted	C	0.000	14/03/2017 19:14:31
#include <stdio.h>
 
int main(void) {
	
	double l, el=1;
 
	while(el>0) {
 
		scanf("%lf", &el);
		if(el==0)
			break;
 
    	l = el + (el-3);
 
		l = (l-el)/el;
 
		printf("%lf\n", l);
 
	}
 
 
	return 0;
}