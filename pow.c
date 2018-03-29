#include <stdio.h>
#include <math.h>

int main(){

	setbuf(stdout, NULL);

	double base, expo, result;

	printf("Enter the base and expo\n");
	scanf("%lf%lf", &base, &expo);

	result = pow(base,expo);

	printf("The result is %.2lf\n", result);

	return 0;
}
