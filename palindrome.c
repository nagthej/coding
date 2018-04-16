#include <stdio.h>
#include <string.h>
#define size 100

int main(){

	setbuf(stdout, NULL);

	char str[size];
	printf("Enter the string\n");
	gets(str);


	char revstr[size];
	int index=0;
	int length = strlen(str);

	if(length<2){
		printf("Please enter string greater than or equal to 2 char\n");
	}
	else{

		for(int i=length-1; i>=0;i--){
			revstr[index]=str[i];
			index++;
		}
		revstr[index]='\0';

		printf("The reversed string is %s\n", revstr);

		if(strcmp(str, revstr)==0){
				printf("Yes it is palindrome\n");
			}else{
				printf("Its not a palindrome\n");
			}

	}

	return 0;
}

