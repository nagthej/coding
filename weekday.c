#include <stdio.h>

int main(){

	setbuf(stdout, NULL);

	char *weeks[]={"Monday", "Tuesday", "wed", "thursday", "friday", "sat", "sunday"};

	int week;

	printf("Enter the number of week\n");
	scanf("%d", &week);

	if(week>0 && week<8)
		printf("The day of week is %s\n", weeks[week-1]);
	else
		printf("please enter valid week number");



	return 0;
}

