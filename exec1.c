#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>;
void exec1() {
	int status;
		printf("select number of extersize\n");
		scanf("%d", &status);
		switch (status)
		{
		case 1:
			hello();
			break;
		case 2:
			pi();
			break;
		case 3:
			shape();
			break;
		case 4:
			math1();
			break;
		case 5:
			agecalculator();
			break;
		case 6:
			shape2();
			break;
		case 7:
			bobcalculator();
			break;
		case 8:
			aliceshop();
			break;
		case 9:
			wayz();
			break;
		case 10:
			printhexa();
			break;
		default:
			exec1();
			break;
		}
}

//case1
int hello()
{
	printf("Hello Tamir :D\n");
	return 0;
}
int pi() {
	double pi;
	printf("there is a varible that called pi and has double value\n");
	pi = 3.141592;
	printf("(pi value: %.2f)\n", pi);
	return 0;
}
int shape() {
	printf("look a shape\n");
	printf("   *  \n  ***\n *****\n");
	return 0;
}
int math1() {
	printf("there is 2 varibles a and b the value of them is 5 and 3\n");
	int a = 5;
	int b = 3;
	printf("a*b = %d \n a/b = %d \n b%%a = %d\n", a * b, a / b, a % b);
	printf("before swap: a = %d, b= %d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("after swap: a = %d, b= %d\n", a, b);
	return 0;
}
int agecalculator() {
	int age, year;
	printf("plear enter age and the corrent year (one a time):");
	scanf("%d%d", &age, &year);
	printf("the year you was born at: %d\n", year - age);
	return 0;
}
int shape2() {
	printf("*     *\n *   *\n  * *\n   *\n  * *\n *   *\n*     *\n\n\n");
	return 0;
}
int bobcalculator() {
	int defualtly = 1;
	long id = 217387357;
	double forhour = 29.12;
	int hoursaday = 8, daysaweek = 5, lastyear = 2021, firstyear = 2015;
	printf("(bob)use as default: 1/0\n");
	scanf("%d", &defualtly);
	if (defualtly == 0) {
		printf("enter id: \n");
		scanf("%d", &id);
		printf("enter how much you earn a hour: \n");
		scanf("%lf", &forhour);
		printf("how much hours you work a day? \n");
		scanf("%d", &hoursaday);
		printf("enter how much days do you work a week\n");
		scanf("%d", &daysaweek);
		printf("enter the year you got fired at\n");
		scanf("%d", &lastyear);
		printf("what year do you started working? \n");
		scanf("%d", &firstyear);

	}
	printf("hey bob (id:%d), you worked at the company betwin %d to %d year (years: %d),\nYou worked %d hours a day for a %d days a week(hours a week: %d | hours a month: %d | hours a year: %d).\nyou earned %.2lf every month, and you has earned %.2lf as a compensation.\n",
		id, firstyear, lastyear, lastyear - firstyear, hoursaday, daysaweek, hoursaday * daysaweek,
		hoursaday * daysaweek * 4, hoursaday * daysaweek * 4 * 12, hoursaday * daysaweek * 4 * forhour, hoursaday * daysaweek * 4 * forhour * (lastyear - firstyear));

}
int aliceshop() {
	int A = 5, B = 7;
	double Acost = 8, Bcost = 12;
	printf("\n\n[Shop]Alice paid in average %lf NIS per item.\n\n", (A * Acost + B * Bcost) / (A + B));

	return 0;
}
int wayz() {
	float speed = 90, km = 15;
	int todefault = 1;
	printf("(waze)to use default 1/0\n");
	scanf("%d", &todefault);
	if (todefault != 0 && todefault != 1) todefault = 1;
	if (todefault == 0) {
		printf("enter speed\n");
		scanf("%f", &speed);
		printf("enter km\n");
		scanf("%f", &km);
	}
	float mins = (km / speed) * 60, hours = 0;
	if (mins > 59) {
		hours = (mins / 60);
		mins = mins - (mins / 60) * 60;
	}
	printf("You want to drive from point A to point B you need to drive %.0lf KM,\nThe way will take you %.0lf:%.0lf at %.0lfKMH.\n\n\n\n",
		km, hours, mins, speed);
	return 0;
}
int printhexa() {
	int num = 255;
	printf("num: %d Hexa: %X hexa: %x", num, num, num);
	return 0;
}
