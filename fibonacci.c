#include <stdio.h>

int fibo(int );
int main(){

	setbuf(stdout, NULL);

	int term, n,i;

	printf("Enter the number of fibo terms\n");
	scanf("%d", &term);

	int fibonacci = fibo(term-1);

	printf("Fibonacci nth term is %d", fibonacci);

	return 0;

}


int fibo(int n){

	if(n==0)
		return 0;
	if(n==1)
		return 1;
	else
		return fibo(n-1)+fibo(n-2);
}
