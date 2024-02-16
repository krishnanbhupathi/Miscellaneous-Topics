#include<stdio.h>
#include<ctype.h>

int main() {

	char letter;
	printf("Enter any letter of r g b:");

	switch (letter=toupper(getchar())){
		case 'R':
			printf("Red colour\n");
			break;
		case 'G':
			printf("Green colour\n");
			break;
		case 'B':
			printf("Blue colour\n");
			break;
		default:
			printf("Invalid input");
			break;
	}

	// another solution
	if (letter =='R')
		printf("Red colour\n");
	if (letter == 'G')
		printf("Gree colour\n");
	if (letter == 'B')
		printf("Blue colour\n");
	
	return 0;
}