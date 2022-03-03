#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>;
#include <math.h>;
void exec2() {
	int status;
	printf("select class/home (0/1)\n");
	scanf("%d", &status);
	if (status == 0) {
		printf("select number of extersize\n");
		scanf("%d", &status);
		switch (status)
		{
		case 1:
			exe2_c1();
			break;
		case 2:
			exe2_c2();
			break;
		case 3:
			exe2_c3();
			break;
		case 4:
			exe2_c4();
			break;
		case 5:
			exe2_c5();
			break;
		case 6:
			exe2_c6();
			break;
		default:
			exec2();
			break;
		}
	}
	else
	{
		switch (status)
		{
		case 1:
			exe2_h1();
			break;
		case 2:
			exe2_h2();
			break;
		case 3:
			exe2_h3();
			break;
		case 4:
			exe2_h4();
			break;
		case 5:
			exe2_h5();
			break;
		case 6:
			exe2_h6();
			break;
		case 7:
			exe2_h7();
			break;
		case 8:
			exe2_h8();
			break;
		case 9:
			exe2_h9();
			break;
		default:
			exec2();
			break;
		}
	}
}
//class
int exe2_c1() {
	int num, res;
	printf("enter some 3 digit number\n");
	scanf("%d", &num);
	if (num > 99 && num < 1000) {
		//333 = 9 
		res = num / 100;
		num = num - res * 100;
		res = res + num / 10;
		num = num - (num / 10) * 10;
		res += num;
		num -= num;
		printf("sum: %d\n", res);
	}
	else
	{
		printf("wrong input '%d'\n", num);
		exe2_c1();
	}

}
int exe2_c2() {
	int num;
	printf("enter some 3 digit number\n");
	scanf("%d", &num);
	if (num > 99 && num < 1000) {
		//123 = 321
		num = num / 100 + (num / 10 - (num / 100) * 10) * 10 + (num - (num / 100) * 100 - (num / 10 - (num / 100) * 10) * 10) * 100;
		printf("convert: %d\n", num);
	}
	else
	{
		printf("wrong input '%d'\n", num);
		exe2_c2();
	}

	return 0;
}
int exe2_c3() {
	int days = 0, months = 0, years = 0;
	printf("enter the number of days you want to convert:\n");
	scanf("%d", &days);
	if (days > 365) {
		years = days / 365;
		days -= years * 365;
	}
	if (days > 30) {
		months = days / 30;
		days -= months * 30;
	}
	printf("%d years, %d months, %d days\n", years, months, days);
	return 0;
}
int exe2_c4() {
	int x, x1, x2, x3, y, X;
	printf("please enter test grade, and 3 Chores (one every line)\n");
	scanf("%d%d%d%d", &x, &x1, &x2, &x3);
	printf("grades: test %d, chore(1) %d, chore(2) %d, chore(3) %d\n", x, x1, x2, x3);
	y = (x1 + x2 + x3) / 3;
	printf("average chores garde ((%d + %d + %d)/3=) %d\n", x1, x2, x3, y);
	X = y * 0.2 + x * 0.8;
	printf("final grade (%d * 0.2 + %d * 0.8 =) %d\n", y, x, X);
	return 0;
}
int exe2_c5() {
	double x = 0.0, x2, x4, x6, x8;
	printf("enter a number:\n");
	scanf("%lf", &x);
	x2 = pow(x, 2);
	x4 = pow(x, 4);
	x6 = pow(x, 6);
	x8 = pow(x, 8);
	printf("X %.0lf,X^2 %.0lf,X^4 %.0lf,X^6 %.0lf,X^8 %.0lf\n", x, (double)x2, (double)x4, (double)x6, (double)x8);
	return 0;
}
int exe2_c6() {
	double atob, cara, carb, fly, KMMa, KMMb, KMMfly, res;
	printf("please enter the distance between city a and city b, speed of car a, speed of car b, fly speed (one answer a line)\n");
	scanf("%lf%lf%lf%lf", &atob, &cara, &carb, &fly);
	KMMa = cara / 60;
	KMMb = carb / 60;
	KMMfly = fly / 60;
	res = (atob / (KMMa + KMMb)) * KMMfly;
	printf("fly flyed %lf km", res);
	return 0;
}
//home
int exe2_h1() {
	double num;
	printf("enter square edge\n");
	scanf("%lf", &num);
	num = sqrt(2) * num;
	printf("answer: %lf\n", num);
	return 0;
}
int exe2_h2() {
	double r, area, perimeter, volume;

	printf("please enter radios:\n");

	scanf("%lf", &r);
	area = M_PI * pow(r, 2);
	perimeter = 2 * M_PI * r;
	volume = (4.0 / 3.0) * M_PI * pow(r, 3);
	printf("area %.2lf, perimeter %.2lf, volume %.2lf\n", area, perimeter, (double)volume);
	return 0;
}
int exe2_h3() {
	int n;
	double a1, d, an;
	printf("please enter n,a1,d (one a line)\n");
	scanf("%d%lf%lf", &n, &a1, &d);
	an = a1 + d * (n - 1);
	printf("the number an = %.2lf\n", an);
	return 0;
}
int exe2_h4() {
	int n;
	double a1, d, sn, an;
	printf("please enter n,a1,d (one a line)\n");
	scanf("%d%lf%lf", &n, &a1, &d);
	an = a1 + d * (n - 1);
	sn = (n * (a1 + an) / 2);
	printf("the sum of this is = %.2lf\n", sn);
	return 0;
}
int exe2_h5() {
	int n;
	double a1, q, an;
	printf("please enter n,a1,q (one a line)\n");
	scanf("%d%lf%lf", &n, &a1, &q);
	an = a1 * pow(q, n - 1);
	printf("A%d = %.1lf\n", n, an);
	return 0;
}
int exe2_h6() {
	int n;
	double a1, q, an, as;
	printf("please enter n,a1,q (one a line)\n");
	scanf("%d%lf%lf", &n, &a1, &q);
	an = a1 * pow(q, n - 1);
	as = (a1 * (pow(q, n) - 1)) / (q - 1);
	printf("S%d = %.1lf\n", n, as);
	return 0;
}
int exe2_h7() {
	int n, n1, n2, ans;
	printf("enter number: \n");
	scanf("%d", &n);
	if (n > 99 && n < 1000) {
		n1 = n / 100;
		n2 = n / 10 - n1 * 10;
		n -= n1 * 100 + n2 * 10;
		ans = pow(n1, 2) + pow(n2, 2) + pow(n, 2);
		printf("%d^2 + %d^2 + %d^2= %d\n", n1, n2, n, ans);
	}
	else {
		printf("wrong input %d\n", n);
		exe2_h7();
	}
}
int exe2_h8() {

	double n;
	printf("please enter folat\n");
	scanf("%lf", &n);
	n = n - (int)n;
	printf("answer: %.2lf\n", n);
	return 0;
}
int exe2_h9() {
	double a, b, ans;
	printf("please enter Old salary, Compensation(one a line)\n");
	scanf("%lf%lf", &a, &b);
	ans = a * 0.75 + b * 0.1;
	printf("new salary : %.2lf", round(ans));
	return 0;
}