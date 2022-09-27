#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int input_second,minute,second;
	
	printf("input the second : ");
	scanf("%d",&input_second);
	
	minute=input_second/60;
	second=input_second%60;
	
	printf("the time is %d : %d\n", minute,second);
		
	return 0;
}

