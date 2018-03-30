#include <stdio.h>

int main(){

	setbuf(stdout, NULL);

	int num,isprime;
	int i,j;

	printf("Enter a number\n");
	scanf("%d", &num);

	//For corner test case
	if(num<2){
		printf("Please enter number greater than 2 to get prime factors\n");
	}


	for(i=2;i<=num;i++){

		if(num%i==0){

			isprime = 1;
			for(j=2;j<=i/2;j++){

				if(i%j==0){
					isprime=0;
					break;
				}
			}

			if(isprime==1){
						printf("The prime factors are: %d\n", i);
					}

		}
	}
	return 0;

}
