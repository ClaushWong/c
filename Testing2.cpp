#include <stdio.h>

void main(){
	//Lab3
	//Question 1 + Question 2
	/*
	int age;
	float price;
	
	printf("Welcome to South Park.\n");
	printf("Please insert your age : ");
	scanf("%d",&age);

	if (age <= 0){
		printf("\nThe data you type is invalid. Try again.\n");
	}

	else {
		if (age < 12){
			price = 5.00;
		}

		else {
			price = 10.00;
		}
		printf("The price you need to pay is RM%.2f.\n", price);
	}

	
	//Question 3
	int mark;

	printf("So, you want to check which grade you are? Insert your mark please.\nMark : ");
	scanf("%d",&mark);

	if (mark < 0) {
		printf("Mark can\'t be negative. Try again.\n");
	}

	else {
		if (mark >= 45) {
			if (mark >= 60) {
				if (mark >= 75) {
					if (mark >= 90) {
						printf("Your grade is A.\n");
					}
					else {
						printf("Your grade is B.\n");
					}
				}
				else {
					printf("Your grade is C.\n");
				}
			}
			else {
				printf("Your grade is D.\n");
			}
		}
		else {
			printf("Your grade is E.\n");
		}
	}


	//Question 4 ( Done )
	int day;

	printf("Please insert Day ( 1 - 7 ) : ");
	scanf("%d",&day);
	while (day > 7 || day < 1) {
		printf("Re-enter Please insert Day ( 1 - 7 ) : ");
		scanf("%d", &day);
	}
	switch (day) {
		case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wednesday\n");
			break;
		case 4:
			printf("Thursday\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
		case 7:
			printf("Sunday\n");
			break;
		default:
			printf("Invalid input. Try again.\n");
	}
	*/

	//Question 5 ( Done )
	int a, b, c;
	printf("Insert 3 numbers.");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b && a > c){
		printf("%d is the highest.\n", a);
		if (b < c){
			printf("%d is the smallest.\n", b);
		}
		else {
			printf("%d is the smallest.\n", c);
		}
	}
	else if (b > a && b > c){
		printf("%d is the highest.\n", b);
		if (a<c){
			printf("%d is the smallest.\n", a);
		}
		else {
			printf("%d is the smallest.\n", c);
		}
	}
	else if (c > a && c > b){
		printf("%d is the highest.\n", c);
		if (a<b){
			printf("%d is the smallest.\n", a);
		}
		else {
			printf("%d is the smallest.\n", b);
		}
	}
	else {
		printf("Error Occur.\n");
	}

	/*
	//Question 6
	char employee_status;
	int year_of_service;
	float salary;

	printf("Enter the employee status : ");
	scanf("%c", &employee_status);
	if (employee_status == 'P' || employee_status == 'F'){
		printf("Enter the employee's year of services : ");
		scanf("%d", &year_of_service);
		printf("Enter the employee's current salary : ");
		scanf("%f", &salary);

		if (employee_status == 'F' && year_of_service < 5){
			salary = salary * 104 / 100;
		}
		else if (employee_status == 'F' && year_of_service >= 5){
			salary = salary * 105 / 100;
		}
		else if (employee_status == 'P' && year_of_service < 5){
			salary = salary * 125 / 100;
		}
		else if (employee_status == 'P' && year_of_service >= 5){
			salary = salary * 130 / 100;
		}
		printf("This employee's new salary is %.2f.\n",salary);
	}
	else {
		printf("Employee status undefined. Try again later.\n");
	}


	//Question 7
	float deposit, withdrawal, balance = 0.00;
	char code;

	printf("WELCOME TO APRIL_BANK BERHAD\n");
	printf("YOUR CURRENT BALANCE : RM%.2f\n",balance);
	printf("PLEASE CHOOSE YOUR TRANSACTION\n");
	printf("CASH DEPOSIT == D\tCASH WITHDRAWAL == W\n");
	printf("Enter the transaction code ( D , W ) : ");
	scanf("%c",&code);

	if (code == 'D' || code == 'd') {
		printf("\nDEPOSIT TRANSACTION\nENTER AMOUNT : RM");
		scanf("%f",&deposit);
		balance = balance + deposit;
		printf("PROCESSING......\tPLEASE WAIT\n");
		printf("AMOUNT DEPOSITED : RM%.2f\n",deposit);
		printf("BALANCE : RM%.2f\n\n",balance);
		printf("** THANK YOU **\n");
	}
	else if (code == 'W' || code == 'w'){
		printf("\nWITHDRAWAL TRANSACTION\nENTER AMOUNT : RM");
		scanf("%f", &withdrawal);
		if (balance > withdrawal){
			balance = balance - withdrawal;
			printf("PROCESSING......\tPLEASE WAIT\n");
			printf("AMOUNT WITHDRAWED : RM%.2f\n", withdrawal);
			printf("BALANCE : RM%.2f\n\n", balance);
			printf("** THANK YOU **\n");
		}
		else {
			printf("TRANSACTION ERROR\n** THANK YOU **\n");
		}
	}
	else {
		printf("CODE INCORRECT. TRANSCATION FAILED.\n");
		printf("** THANK YOU **\n");
	}
	*/
}