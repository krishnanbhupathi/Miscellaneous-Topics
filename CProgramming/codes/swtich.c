#include<stdio.h>

int main() {

	char letter;
	printf("Enter character from a-z:");
	scanf("%c",&letter);

	switch (letter) {
		case 'a':
			printf("This is first letter\n");
			break;
		
		case 'z':
			printf("This is last letter\n");
			break;
			
		default:
			printf("This is middle letter\n");
			break;
	}

	return 0;
}

