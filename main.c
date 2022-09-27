#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b;
	int sum,sub,mul,div,rest;
	
	printf("input two integers : ");
	scanf("%i%i",&a,&b);
	
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	rest=a%b;
	
	printf("+ result is %d\n", sum);
	printf("- result is %d\n", sub);
	printf("* result is %d\n", mul);
	printf("/ result is %d\n", div);
	printf("%% result is %d\n", rest);
	
	return 0;
}

