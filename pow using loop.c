#include <stdio.h>

int main(){

	setbuf(stdout, NULL);

	double base, expo;
	double result=1;

	printf("Enter the base and expo\n");
	scanf("%lf%lf", &base, &expo);

	for (int i=0;i<expo;i++){
		result = result*base;
	}

	printf("The result is %lf", result);

	return 0;
}

