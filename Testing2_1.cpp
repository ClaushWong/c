#include <stdio.h>

void main(){
	int a, b, c;
	printf("Insert 3 numbers.");
	scanf("%d %d %d", &a, &b, &c);
	/*
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
		if (a < b){
			printf("%d is the smallest.\n", a);
		}
		else {
			printf("%d is the smallest.\n", b);
		}
	}
	else {
		printf("Error Occur.\n");
	}
	*/

	if (a > b && a > c && b < c){
		printf("H:%d\nS:%d\n",a,b);
	}
	else if (a > b && a > c && c < b){
		printf("H:%d\nS:%d\n", a, c);
	}
	else if (b > a && b > c && a < c){
		printf("H:%d\nS:%d\n", b, a);
	}
	else if (b > a && b > c && c < a){
		printf("H:%d\nS:%d\n", b, c);
	}
	else if (c > a && c > b && b < a){
		printf("H:%d\nS:%d\n", c, b);
	}
	else if (c > a && c > b && a < b){
		printf("H:%d\nS:%d\n", c, a);
	}
	else {
		printf("Error\n");
	}
}