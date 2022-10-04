#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b;
	char c;
	
	printf("enter the calculation: ");
	scanf("%d %c %d", &a, &c, &b);
	
	switch(c){
		case 42:
			printf("%d",a*b);
			break;
		case 43:
			printf("%d",a+b);
			break;
		case 45:
			printf("%d",a-b);
			break;
		case 47:
			printf("%d",a/b);//문자형을 int(정수)로 받았기 때문에 소수값이 나오지 않는다. 
			break;
	}


	return 0;
}
