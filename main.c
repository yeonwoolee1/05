#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	scanf("%i",&a);
	if (a>0)
		printf("positive");
	else if(a<0)
		printf("negative");
	else
		printf("zero"); 
	
	return 0;
}
