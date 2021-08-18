#include <stdio.h>
#include <stdlib.h>


void main(){

	int x1, x2, y1, y2, i = 0, p = 1, y = 0, x = 0;
	float m = 0;

	printf("Ingresa x1 y1:\n");
	scanf("%d %d", &x1, &y1);
	printf("Ingresa x2 y2:\n");
	scanf("%d %d", &x2, &y2); 
	
	//
		while ((x1<=0)||(y1>=100)){
			printf("Ingresa x1 y:\n");
			scanf("%d %d", &x1, &y1);
		}
	
		while ((x2<=0)||(y2>=100)){
			printf("Ingresa x2 y2:\n");
			scanf("%d %d", &x2, &y2);
		}
	
	//
		x = x1;
		m = (float)(y2-y1)/(x2-x1);
		
	
		if (x1 > x2){		
			p = -1;
		}
	
		printf("|  x   |   y  |\n");
		for (i = 0; i < abs(x1-x2)+1; i++) {
			y = (m*(x-x1)+y1);
			printf(" %d   |   %d  \n",x,y);
			x = x + p;
		}

	return;
}
