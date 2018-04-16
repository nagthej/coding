#include <stdio.h>

int main(){

	setbuf(stdout, NULL);

	int num, lastdigit, sum;

	sum = 0;

	printf("Enter the number\n");
	scanf("%d", &num);

	while(num!=0){

		lastdigit = num%10;
		sum = sum + lastdigit;
		num = num/10;
	}

	printf("the number is %d\n", sum);

	return 0;
}

