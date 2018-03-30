#include <stdio.h>
#include <math.h>

int main(){

	setbuf(stdout, NULL);

	int num, numdigits, noofdigits;
	int lastdigit, result=0;

	printf("Enter a number\n");
	scanf("%d", &num);

	int originalnum=num;

	//For corner test case
	if(num<0){
		printf("Please enter a positive number\n");
	}

	noofdigits = (int)log10(num)+1;
	numdigits=noofdigits;

	while(noofdigits!=0){

		lastdigit = num%10;
		result = result + round(pow(lastdigit,numdigits));
		noofdigits--;
		num = num/10;

	}

	if(result==originalnum){
		printf("Yes it is Armstrong number\n");
	}else{
		printf("No its not an Armstrong number\n");
	}

	return 0;

}
