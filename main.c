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
			printf("%d",a/b);//�������� int(����)�� �޾ұ� ������ �Ҽ����� ������ �ʴ´�. 
			break;
	}


	return 0;
}
