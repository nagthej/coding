#include <stdio.h>

int factorial(int);
int main(){

	setbuf(stdout, NULL);

	int num, fact;
	printf("Enter the number\n");
	scanf("%d", &num);

	fact = factorial(num);

	printf("The factorial of number is %d\n", fact);
	return 0;
}


int factorial(int n){

	if(n==0){
		return 1;
	}
	else{

		return n*factorial(n-1);
	}


}
