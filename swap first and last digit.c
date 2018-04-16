#include <stdio.h>
#include <math.h>

int main(){

	setbuf(stdout, NULL);

	int num, finalresult;

	printf("Enter any number\n");
	scanf("%d", &num);

	if(num<10){
		printf("Please enter number 10 or higher\n");
	}
	else{

		int firstdigit,lastdigit,digits;
		lastdigit = num%10;
		digits = (int)log10(num);
		firstdigit = num/pow(10, digits);

		finalresult = lastdigit * (int)pow(10, digits);
		finalresult = finalresult + num % (int)pow(10,digits);
		finalresult = finalresult - lastdigit;
		finalresult = finalresult + firstdigit;

	}


	printf("the swapped first and last digit is %d\n", finalresult);


	return 0;
}

