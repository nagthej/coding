
#include <stdio.h>

int main(){

	setbuf(stdout, NULL);

	int days,years,weeks;

	printf("Enter the number of days\n");
	scanf("%d", &days);

	years = (days/365);

	weeks = (days-(years*365))/7;

	days = days - (years*365) - (weeks*7);

	printf("The number of years are %d\n", years);
	printf("The number of weeks are %d\n", weeks);
	printf("The number of days are %d\n", days);

	return 0;
}

