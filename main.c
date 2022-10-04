#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, c;
	c=0;
	a=59;
	 
	do{
		c++;
		printf("guess a number: ");
		scanf("%d", &b);
		if(b==a)
			printf("congratulation!\ntrial: %d", c);
		else if(b>a)
			printf("high!\n");
		else
			printf("low!\n");
	}
	while(b!=a);	
	
		
	
	return 0;
}
