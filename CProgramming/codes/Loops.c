
#include<stdio.h>

int main() {

	int counter = 1; // initialization

	while (counter <= 10) { // repetation condition
		printf("%d\n",counter);
		counter++; // increment
	}


	/*
	while(condition) {
		statement1;
		statement2;
		.....
		statementN;
	}
	*/

	
	int digit = 0;
	
	do {
		printf("%d\n",digit);
		digit++;
	} while(digit <= 9);

	/*
	 do {
		statement1;
		statement2;
		.....
		statementN;
	 } while (condition) ;
	*/


	/*
	for(initial; condition; iteration) {
		statement1;
		statement2;
		.....
		statementN;
	}
	*/

	for(int i = 0 ; i < 5; i++) {
		printf("Hello\n");
	}

	for(int i = 1; i < 5 ; i++) {
		printf("Hello\n");
	}

	int count;
	for(count = 0 ; count <= 9; count++)
		printf("%d ",count);

	// while loop example

	int weight = 60;

	while (weight > 65) {
		printf("Go exercise\n");
		printf("Then come back\n");
		printf("Enter your weight: ");
		scanf("%d",&weight);
	}
	printf("\nYou are in good state!");

	/*
	do {
		// write you block of code
	}while(condition)
	*/

	// do while loop example
	do {
		printf("Go Exercise\n");
		printf("Then come back\n");
		printf("Enter you weight: ");
		scanf("%d",&weight);
	}while ((weight > 65)) ; 


	// another example
	int digit = 20;

	while(digit < 15) { // 20 < 15 - false
		digit++;
	}
	printf("%d\n",digit);
	
	do {
		digit++; // first increment then check the condition
	} while(digit < 15); // 21 < 15 false
	printf("%d",digit); // 21


	// for loops

	/*
	for (initializing : condition : increment/decrement) {
		// block of code
	}
	1. initializing step
	2. checking the condition
	3. executing block of code if condition is true , else control flow comes outside of loop
	4. increment / decrement
	*/

	return 0;
}