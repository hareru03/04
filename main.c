#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,hour,minute,second;
	printf("input the second : ");
	scanf("%d",&a);
	
	hour=a/3600;
	minute=(a%3600)/60;
	second=(a%3600)%60;
	
	printf("The time for %d second is %d:%d:%d",a,hour,minute,second);


	return 0;
}

