#include <stdio.h>

int main(){

	setbuf(stdout, NULL);

	int num,lastdigit;

	printf("Enter the number\n");
	scanf("%d", &num);

	if(num<10){
		printf("Please enter a number 10 or higher\n");
	}

	else{
	lastdigit = num%10;

	while(num>=10){
		num = num/10;
	}

	printf("The first and last digit are %d and %d", num, lastdigit);

	}
	return 0;
}

