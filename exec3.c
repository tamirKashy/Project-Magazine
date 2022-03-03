#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>;
#include <math.h>;

void exec3() {
	int status;
	printf("select class/home (0/1)\n");
	scanf("%d", &status);
	if (status == 0) {
		printf("select number of extersize\n");
		scanf("%d", &status);
		switch (status)
		{
		case 1:
			exe3_c1();
			break;
		case 2:
			exe3_c2();
			break;
		case 3:
			exe3_c3();
			break;
		case 4:
			exe3_c4();
			break;
		case 5:
			exe3_c5();
			break;
		default:
			exec3();
			break;
		}
	}
	else
	{
		switch (status)
		{
		case 1:
			exe3_h1();
			break;
		case 2:
			exe3_h2();
			break;
		case 3:
			exe3_h3();
			break;
		case 4:
			exe3_h4();
			break;
		case 5:
			exe3_h5();
			break;
		case 6:
			exe3_h6();
			break;
		case 7:
			exe3_h7();
			break;
		case 8:
			exe3_h8();
			break;
		case 9:
			exe3_h9();
			break;
		case 10:
			exe3_h10();
			break;
		default:
			exec3();
			break;
		}
	}
}
//class
int exe3_c1() {
	int x, y, z, m;
	printf("enter 3 vars (one a line)\n");
	scanf("%d%d%d", &x, &y, &z);
	m = x;
	if (m < y) {
		m = y;
	}
	if (m < z) {
		m = z;
	}
	printf("biggest num: %d\n", m);
	return 0;
}
int exe3_c2() {
	int x, y;
	printf("enter 2 vars (one a line)\n");
	scanf("%d%d", &x, &y);
	if ((x % 2) || (y % 2) || (y == 0) || (x % y)) printf("Invalid numbers\n");
	else printf("Valid numbers\n");
	return 0;
}
int exe3_c3() {
	int num, n1, n2, n3;
	printf("please enter number with 3 digits\n");
	scanf("%d", &num);
	if (num < 100 || num > 999) {
		printf("Invalid input\n");
		exe3_c3();
		return 0;
	}
	n1 = num / 100;
	n2 = (num - n1 * 100) / 10;
	n3 = num - n1 * 100 - n2 * 10;
	//printf("%d %d %d", n1, n2, n3);
	if (n1 > n2 && n1 > n3 && n2 > n3) {
		printf("Very Descending\n");
	}
	else if (n1 < n2 && n1 < n3 && n2 < n3) {
		printf("Very Ascending\n");
	}
	else if (n1 < n2 && n1 < n3 && !(n2 < n3)) {
		printf("Ascending\n");
	}
	else if ((n1 == n2 && n1 == n3) ||
		(n1 > n2 && n2 < n3) || (n1 < n2 && n1 < n3) || (n1 < n2 && n2 > n3)) {
		printf("Digits neither ascending nor descending\n");
	}
	return 0;
}
int exe3_c4() {
	int secs, mins = 0, hours = 0;
	printf("enter seconds:\n");
	scanf("%d", &secs);
	if (secs <= 0) {
		printf("the number of seconds must be more then 0 (input: %d)\n", secs);
		exe3_c4();
		return 0;
	}
	if (secs >= 60) {
		mins = secs / 60;
		secs -= mins * 60;
	}
	if (mins >= 60) {
		hours = mins / 60;
		mins -= hours * 60;
	}
	printf("The time is: %d:%d:%d \n", hours, mins, secs);
	return 0;
}
int exe3_c5() {
	int d, m, y, maxd = 30;
	printf("enter date (day:month:year one a time):\n");
	scanf("%d%d%d", &d, &m, &y);
	if (m == 2) {
		if (y % 4 == 0) maxd = 29;
		else maxd = 28;

	}
	else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
		maxd = 31;
	}
	if (d <= 0 || m <= 0 || y <= 0) {
		printf("All the inputs must be more then 0 (input: %d,%d,%d)\n", d, m, y);
		exe3_c5();
		return 0;
	}
	else if (d > maxd) {
		printf("number of days must be not more then %d on this month you selected (input: %d,%d,%d)\n", maxd, d, m, y);
		exe3_c5();
		return 0;
	}
	else if (m > 12) {
		printf("number of months must be not more then 12 (input: %d,%d,%d)\n", d, m, y);
		exe3_c5();
		return 0;
	}
	d += 1;
	if (d > maxd) {
		d = 1;
		m += 1;
		if (m > 12) {
			m -= 12;
			y += 1;
		}
	}
	printf("The next date is: %d,%d,%d \n", d, m, y);
	return 0;
}
//home
int exe3_h1() {
	int num;
	printf("enter some number\n");
	scanf("%d", &num);
	if (num < 0) {
		num = num * -1;
	}
	printf("ans: %d", num);
	return 0;
}
int exe3_h2() {
	double cost, res;
	int num;
	printf("enter cost of the item and then the amount\n");
	scanf("%lf%d", &cost, &num);
	if (num < 0) {
		printf("the amount must be more then 0 (%d)\n", num);
		exe3_h2();
		return 0;
	}
	else if (cost < 0.0) {
		printf("the cost must be more then 0 (%lf)\n", cost);
		exe3_h2();
		return 0;
	}
	if (num >= 50) {
		res = 0.5;
	}
	else if (num >= 25) {
		res = 0.80;
	}
	else if (num >= 10) {
		res = 0.95;
	}
	else {
		res = 1;
	}
	res = (cost * (double)num) * res;
	printf("answer: %.2lf\n", res);
	return 0;
}
int exe3_h3() {
	int num;
	printf("enter some number\n");
	scanf("%d", &num);
	if ((num % 2 == 0 && num % 3 == 0 && !(num % 5 == 0)) || (!(num % 2 == 0) && !(num % 7 == 0) && !(num % 11 == 0))) printf("Valid Number\n");
	else printf("Invalid Number\n");
	return 0;
}
int exe3_h4() {
	int n1, n2, n3, s = 0;
	printf("enter 3 number\n");
	scanf("%d%d%d", &n1, &n2, &n3);
	if (n1 % 2 == 0) {
		s = s + 1;
	}
	if (n2 % 2 == 0) {
		s = s + 1;
	}
	if (n3 % 2 == 0) {
		s = s + 1;
	}
	if (s >= 2) printf("Valid Number\n");
	else printf("Invalid Number\n");
	exe3_h4();
	return 0;
}
int exe3_h5() {
	int curday, curmonth, curyear, birthday, birthmonth, birthyear, res;
	printf("enter the corrent day month and year (one a line)\n");
	scanf("%d%d%d", &curday, &curmonth, &curyear);
	printf("enter the your birthday day month and year (one a line)\n");
	scanf("%d%d%d", &birthday, &birthmonth, &birthyear);
	res = (curyear - birthyear) + ((curmonth - birthmonth) * 30 + curday - birthday) / 365;
	printf("you are now %d years old\n", res);
	return 0;
}
int exe3_h6() {
	int x, y;
	printf("enter point (x,y - one aline)\n");
	scanf("%d%d", &x, &y);
	if (x > 0 && y > 0) {
		printf("first quadrant\n");
	}
	else if (x < 0 && y > 0) {
		printf("second quadrant\n");
	}
	else if (x < 0 && y < 0) {
		printf("third quadrant\n");
	}
	else if (x > 0 && y < 0) {
		printf("forth quadrant\n");
	}
	else printf("some error");
	return 0;
}
int exe3_h7() {
	int x1, y1, x2, y2;
	double res;
	printf("enter 2 point (x,y - one aline)\n");
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	res = pow(x1 + x2, 2) + pow(y1 + y2, 2);
	res = sqrt(res, 2);
	printf("res: %.2lf", res);
	return 0;
}
int exe3_h8() {
	double a, b, c, res1, res2;
	printf("enter a b c (one a line)\n");
	scanf("%lf%lf%lf", &a, &b, &c);
	res1 = pow(b, 2) - (4 * a * c);
	res1 = sqrt(res1, 2);
	res2 = (-1 * b - res1) / (2 * a);
	res1 = (-1 * b + res1) / (2 * a);
	if (res1 != res1 && res2 != res2) printf("there is not result at all\n");
	else if (res1 != res1) printf("only one result: %.2lf\n", res2);
	else if (res2 != res2) printf("only one result: %.2lf\n", res1);
	else if (res1 = res2) printf("only one result: %.2lf\n", res1);
	else printf("res: %.2lf| %.2lf\n", res1, res2);
	return 0;
}
int exe3_h9() {
	int a, h, res;
	printf("enter a b (one a line)\n");
	scanf("%d%d", &a, &h);
	if (1 != 1) {
		printf("Invalid input");
	}
	else {
		res = (a * h) / 2;
		printf("res %d", res);
	}
	return 0;
}
int exe3_h10() {
	int birthday, birthmonth, birthyear;
	printf("enter the your birthday day month and year (one a line)\n");
	scanf("%d%d%d", &birthday, &birthmonth, &birthyear);
	if (21 <= birthday && birthmonth == 3 || 19 >= birthday && birthmonth == 4) printf("you are aries!");
	else if (20 <= birthday && birthmonth == 4 || 20 >= birthday && birthmonth == 5)  printf("you are taurus!");
	else if (21 <= birthday && birthmonth == 5 || 21 >= birthday && birthmonth == 6)  printf("you are gemini!");
	else if (22 <= birthday && birthmonth == 6 || 22 >= birthday && birthmonth == 7)  printf("you are cencer!");
	else if (23 <= birthday && birthmonth == 7 || 22 >= birthday && birthmonth == 8)  printf("you are leo!");
	else if (23 <= birthday && birthmonth == 8 || 22 >= birthday && birthmonth == 9)  printf("you are virgo!");
	else if (23 <= birthday && birthmonth == 9 || 22 >= birthday && birthmonth == 10)  printf("you are libra!");
	else if (23 <= birthday && birthmonth == 10 || 21 >= birthday && birthmonth == 11)  printf("you are scorpio!");
	else if (22 <= birthday && birthmonth == 11 || 21 >= birthday && birthmonth == 12)  printf("you are sagittarius!");
	else if (22 <= birthday && birthmonth == 12 || 19 >= birthday && birthmonth == 1)  printf("you are capricorn!");
	else if (20 <= birthday && birthmonth == 1 || 18 >= birthday && birthmonth == 2)  printf("you are aquarius!");
	else if (19 <= birthday && birthmonth == 2 || 20 >= birthday && birthmonth == 3)  printf("you are pisces!");
	return 0;
}