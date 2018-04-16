#include <stdio.h>

int main(){

	setbuf(stdout, NULL);

	int num1,num2,lcm,tempmax,max;

	printf("Enter 2 numbers greater than 0\n");
	scanf("%d%d", &num1, &num2);

	max = (num1>num2)?num1:num2;

	tempmax=max;

	while(1){
	if(tempmax%num1==0 && tempmax%num2==0){

		lcm=tempmax;
		break;
	}
	tempmax=tempmax+max;
	}

	printf("LCM is %d\n", lcm);
	return 0;

}
