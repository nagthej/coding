#include <stdio.h>
#include <string.h>
#define size 100

int main(){

	setbuf(stdout, NULL);

	int num, i;
	int freq[10];

	printf("Enter the number\n");
	scanf("%d", &num);

	for(i=1;i<=10;i++){
		freq[i]=0;
	}


	while(num!=0){

		int rem=num%10;
		freq[rem]++;
		num=num/10;

	}

	for(i=1;i<=10;i++){
		printf("The freq[%d] is: %d\n",i,freq[i]);
	}

	return 0;
}

