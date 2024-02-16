
// user is going to give n as integer follow than gives n integers and you have to get the
// sum of n integers.

// gettting the sum of n integers
#include<stdio.h>


int main() {

	int n;
	scanf("%d",&n); // getting input for n numbers(how many) n = 3

	int sum = 0; // i = 3
	for(int i = 0 ; i < n; i++) { // i = 0 : 3 < 3 (false)


		int num; // declaring a integer 
		scanf("%d",&num); // getting actual number(each and every number) num = 2
		sum = sum  + num; // adding the number to sum 
		// sum = 0 + 12 = 12 + 13  = 25 + 2 = 27;
	}
	printf("%d", sum);


	return 0;
}