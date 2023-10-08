#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=45;
	int num;
	int trial=0;
	
	do
	{
		printf("guess a number:");
		scanf("%d",&num);
		
		if (num<answer)
			printf("high!\n");
		else if(num>answer)
			printf("down!\n");
			
		trial=trial+1;
	}
	while(num!=answer);
	
	printf("congratulation! trials:%d\n",trial);
	
	return 0;
}
