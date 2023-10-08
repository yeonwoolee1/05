#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf("number:");
	scanf("%i",&a);
	if (a>=0)
		printf("absolute value: %i\n",a);
	else
		printf("absolute value: %i\n",-a); 
	
	return 0;
}
