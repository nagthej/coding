#include <stdio.h>

int main(){

	setbuf(stdout, NULL);

	int num1,num2;
	int hcf=1;
	int min;
printf("Enter two numbers greater than 0\n");
scanf("%d%d", &num1, &num2);

	min = (num1<num2?num1:num2);

	for(int i=1;i<=min;i++){

		if(num1%i==0 && num2%i==0){
			hcf = i;
		}
	}

	printf("The HCF of number is %d\n", hcf);

	return 0;


}
