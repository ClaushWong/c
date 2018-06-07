#include <stdio.h>

void main(){
	//Question 3 ( Reverse value )
	int num1, num2, num3;

	printf("First Number :");
	scanf("%d",&num1);
	printf("\nSecond Number :");
	scanf("%d", &num2);
	printf("\nThird Number :");
	scanf("%d", &num3);

	printf("\nThe number in reverse order : %d %d %d\n\n",num3,num2,num1);


	//Question 4 ( Addition and Subtraction )
	float float1, float2;

	printf("Insert any number with decimal place.\n");
	printf("First number : ");
	scanf("%f",&float1);
	printf("\nSecond number : ");
	scanf("%f", &float2);

	printf("\n%.2f + %.2f = %.2f\n", float1, float2, float1 + float2);
	printf("%.2f - %.2f = %.2f\n\n", float1, float2, float1 - float2);


	//Question 5 ( Cen to Fah )
	float fah, cen;

	printf("Insert the temperature (centigrade) : ");
	scanf("%f",&cen);
	fah = (cen * 9.0 / 5.0) + 32.0;
	printf("\nEquilvalent temperature in Fahrenheit is %.2f.\n",fah);
	

	//Question 6 ( Perimeter and Area of Rectangle )
	float width, height;
	printf("Hey boi, I want to show you some trick. First, insert the width of rectangle.\nWidth : ");
	scanf("%f",&width);
	printf("\nWoah, you doing it boi. Now, insert the height of rectangle.\nHeight : ");
	scanf("%f", &height);

	printf("\n\nNow boi, this is the trick :\nYour rectangle's perimeter is %.2f and it's area is %.2f.\n\nCool right??\n", 2*width + 2*height , width * height);
	

	//Question 7 ( Volume of Cone )
	const float PI = 3.142;
	float radius, base, height, volume;
	printf("Cone is a lie. Just kidding. Insert da radius for the cone.\nRadius : ");
	scanf("%f",&radius);
	printf("\nHmm.... this is a tricky one. But still, insert the height and I'll finish the ritual.\nHeight :");
	scanf("%f",&height);

	base = PI * radius * radius;
	volume = 1.0 / 3.0 * base * height;

	printf("\n\nI have a good news and a bad news.\nGood news is... the volume of cone is %.2f.\nAnd the bad news is... THE CONE ISN'T A LIE!!!!!\n",volume);
	

	//Question 8 ( Salary )
	float basic, overtime, rate, salary;

	printf("Yorokobe shonen. You're here to calculate your salary right? Now, insert your basic salary.\nBasic salary : RM");
	scanf("%f",&basic);
	printf("\nNow then, insert how many hour('s) you overtime.\nHour('s) of overtime : ");
	scanf("%f", &overtime);
	printf("\nFinally, the rate per hours please....\nRate per hours : RM");
	scanf("%f", &rate);

	salary = basic + (overtime * rate);

	printf("\nHey hey hey..... The salary is out... It's RM%.2f. Be grateful.\n",salary);
	

	//Question 9 ( Bill Payment )
	float minutes;
	float bill;
	const float TAX = 1.15;
	const float RETAIL_COST = 60.00;

	printf("Hi, please insert your number of minutes you use your mobile phone.\nNumber of minutes : ");
	scanf("%f",&minutes);

	bill = (RETAIL_COST + (minutes * 0.30)) * TAX;

	printf("\nThe bill is RM%.2f. Please pay now.\n",bill);
	

	//Question 10 ( Birth Year )
	int birthyear;
	printf("What's your birthyear.\nBirthyear : ");
	scanf("%d",&birthyear);

	printf("\n\nYou'll sit for your UPSR at %d.",birthyear + 12);
	printf("\nYou'll sit for your PMR at %d.", birthyear + 15);
	printf("\nYou'll sit for your SPM at %d.\n", birthyear + 17);


	//Question 11 ( Minuts to Hours and Minutes )
	int hours, minutes1, minutes2;
	printf("Insert minutes.\nMinutes : ");
	scanf("%d",&minutes1);
	hours = minutes1 / 60;
	minutes2 = minutes1 % 60;

	printf("\n%d is equal to %d hours and %d minutes.\n",minutes1,hours,minutes2);
}