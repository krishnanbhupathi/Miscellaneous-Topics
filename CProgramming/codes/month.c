// getting month name by integer using switch statement
#include<stdio.h>

int main() {
	int month;
	printf("Enter the month in integer:");
	scanf("%d",&month);

	switch (month) {
		case 1:
			printf("January");
			break;
		case 2:
			printf("February");
			break;
		case 3:
			printf("March");
			break;
		case 4:
			printf("April");
			break;
		case 5:
			printf("May");
			break;
		case 6:
			printf("June");
			break;
		case 7:
			printf("July");
			break;
		case 8:
			printf("August");
			break;
		case 9:
			printf("September");
			break;
		case 10:
			printf("October");
			break;
		case 11:
			printf("November");
			break;
		case 12:
			printf("December");
			break;
		default:
			printf("Invalid month input!");
			break;
	}
}


// #include<stdio.h>
// #include<ctype.h>

// int main() {

// 	char month []= "January";

// 	switch (month[0]) {
	
// 		case 'J':
// 			if (month[1]=='u') {
// 				if(month[2]=='n'){
// 					printf("June\n");
// 					break;
// 				} else {
// 					printf("July\n");
// 					break;
// 				}
				 
// 			} else {
// 				printf("January\n");
// 			}
// 			break;
// 		case 'F':
// 			printf("February\n");
// 			break;
// 		case 'M':
// 			printf("March\n");
// 			break;
// 		case 'A':
// 			if(month[1] == 'P') {
// 				printf("April\n");
// 				break;
// 			} else {
// 				printf("August\n");
// 				break;
// 			}
// 			break;
// 		default:
// 			printf("Another month\n");
// 			break;
// 	}
// 	return 0;
// }