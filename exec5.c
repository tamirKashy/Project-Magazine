#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>;
#include <math.h>;

void exec5() {
	int status;
	printf("select class/home (0/1)\n");
	scanf("%d", &status);
	if (status == 0) {
		printf("select number of extersize\n");
		scanf("%d", &status);
		switch (status)
		{
		case 1:
			exe5_c1();
			break;
		case 2:
			exe5_c2();
			break;
		case 3:
			exe5_c3();
			break;
		case 4:
			exe5_c4();
			break;
		case 5:
			exe5_c5();
			break;
		default:
			exec5();
			break;
		}
	}
	else
	{
		switch (status)
		{
		case 1:
			exe5_h1();
			break;
		case 2:
			exe5_h2();
			break;
		case 3:
			exe5_h3();
			break;
		case 4:
			exe5_h4();
			break;
		case 5:
			exe5_h5();
			break;
		case 6:
			exe5_h6();
			break;
		case 7:
			exe5_h7();
			break;
		case 8:
			exe5_h8();
			break;
		case 9:
			exe5_h9();
			break;
		case 10:
			exe5_h10();
			break;
		case 11:
			exe5_h11();
			break;
		default:
			exec5();
			break;
		}
	}
}

//class
int exe5_c1() {
	int n[2], ans;
	char op;
	printf("select 2 numbers and some char (+,-,*,/,%)\n");
	scanf("%d%d%c", &n[0], &n[1], &op);
	op = getchar();
	//putchar(op);
	if (op == 43) ans = n[0] + n[1];
	else if (op == 42) ans = n[0] * n[1];
	else if (op == 45) ans = n[0] - n[1];
	else if (op == 37) ans = n[0] % n[1];
	else if (op == 47) {
		if (n[1] == 0) {
			printf("Can not devide by zero\n");
			exe5_c1();
			return 0;
		}
		ans = n[0] / n[1];
	}
	else printf("Invalid operator\n");
	printf("ans: %d\n\n\n", ans);
	exe5_c1();
	return 0;
}


int exe5_c2() {
	int n[2];
	printf("enter some number \n");
	scanf("%d", &n[0]);
	n[1] = 0;
	while (n[0] > 0) {
		n[1] *= 10;
		n[1] += n[0] % 10;
		n[0] /= 10;
	}
	printf("new number %d\n", n[1]);
	exe5_c2();
	return 0;
}

int exe5_c3() {
	int n[2];
	printf("enter some number more then 1 \n");
	scanf("%d", &n[0]);
	n[1] = 0;
	if (n[0] <= 1) {
		printf("wrong input\n");
		exe5_c3();
		return 0;
	}
	for (int i = 1; i < n[0]; i++)
	{
		if (n[0] % i == 0) n[1] += i;
	}
	printf("the answer is %d\n\n", n[1]);
	exe5_c3();
	return 0;
}

int exe5_c4() {
	int n, f = 0;
	printf("enter some number more then 1 \n");
	scanf("%d", &n);
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) f = 1;
	}
	if (f == 1) printf("Not a Prime number\n\n\n");
	else printf("Prime number\n\n\n");
	exe5_c4();
	return 0;
}


int exe5_c5() {
	int n[3], d, f = 0;
	printf("enter some number more then 1 \n");
	scanf("%d%d%d", &n[0], &n[1], &n[2]);
	d = exe5_getGCD(exe5_getGCD(n[0], n[1]), n[2]);
	//d = exe5_getGCD(exe5_getGCD(n[0], n[1]), exe5_getGCD(n[0], n[2]));
	//d = exe5_getGCD(exe5_getGCD(n[1], n[2]), d);
	printf("the gcd is %d\n", d);
	exe5_c5();
	return 0;
}
int exe5_getGCD(int x, int y) {
	int res = 0, n;
	if (x < y) {
		// x=100 y = 25
		x += y; //125
		y = x - y;//100
		x -= y;//25
	}
	for (int i = 1; y >= i; i++)
	{
		if (y % i == 0 && x % i == 0) {
			res = i;
		}
	}
	//printf("the gcd is %d\n", res);
	return res;
}
//home
	//h1
	int exe5_h1() {
		int n[2];
		printf("select a number and max power\n");
		scanf("%d%d", &n[0], &n[1]);
		printf("%d^2 = %d, %d^3 = %d, %d^%d = %d\n",
			n[0], exe5_square(n[0]), n[0], exe5_cube(n[0]), n[0], n[1], exe5_power(n[0], n[1]));
		exe5_h1();
		return 0;
	}
	int exe5_square(int x) {
		return (x * x);
	}
	int exe5_cube(int x) {
		return x * x * x;
	}
	int exe5_power(int x, int n) {
		int res = 1;
		while (n > 0) {
			res *= x;
			n--;
		}
		return res;
	}




	//h2
	int exe5_h2() {
		int n[2];
		printf("select a number to check if even and number to check if odd\n");
		scanf("%d%d", &n[0], &n[1]);
		printf("(0 = even 1 = odd)\nthe first number is %d, the secend number is %d\n", exe5_iseven(n[0]), exe5_isodd(n[1]));
		exe5_h2();
		return 0;
	}
	int exe5_iseven(int num) {
		if (num % 2 == 0) num = 0; else num = 1;
		return num;
	}
	int exe5_isodd(int num) {
		return exe5_iseven(num);
	}




	//h3
	int exe5_h3() {
		int n;
		long res;
		printf("select a number\n");
		scanf("%d", &n);
		res = 1;
		for (int i = 1; i < n; i++)
		{
			res += 1 * exe5_power(10, i);
		}
		printf("%li\n", res);
		exe5_h3();
		return 0;
	}





	//h4
	int exe5_h4() {
		char c;
		printf("select a char\n");
		scanf("%c", &c);
		c = getchar();
		if (exe5_myToLower(c) == -1) {
			printf("the letter is already small or not a letter\n");
		}
		else {
			printf("the letter was converted to small letter -> %c\n", exe5_myToLower(c));
		}
		if (exe5_myToUpper(c) == -1) {
			printf("the letter is already upper or not a letter\n");
		}
		else {
			printf("the letter was converted to upper letter -> %c\n", exe5_myToUpper(c));
		}
		exe5_h4();
		return 0;
	}
	int exe5_myToLower(char ch) {
		if (ch >= 65 && ch <= 90) {
			return 97 + (ch - 65);
		}
		else return -1;
	}
	int exe5_myToUpper(char ch) {
		if (ch >= 97 && ch <= 122) {
			return 65 + (ch - 97);
		}
		else return -1;
	}


	//h5
	int exe5_h5() {
		char n[3];
		int res;
		printf("select 3 numbers\n");
		scanf("%c", &n[0]);
		n[0] = getchar();
		scanf("%c", &n[1]);
		n[1] = getchar();
		scanf("%c", &n[2]);
		n[2] = getchar();
		if ((n[0] >= 48 && n[0] <= 57) && (n[1] >= 48 && n[1] <= 57) && (n[2] >= 48 && n[2] <= 57))  res = (n[0] - 48) * 100 + (n[1] - 48) * 10 + (n[2] - 48);
		else res = 0;
		printf("ans: %d\n", res);
		return res;
	}



	//h6
	int exe5_h6() {
		int n[2], res = 0;
		printf("please enter 2 numbers \n");
		scanf("%d%d", &n[0], &n[1]);
		if (n[1] > n[0]) {
			//n[1] = 100, n[0] = 25
			n[1] += n[0];//125
			n[0] = n[1] - n[0];//100
			n[1] -= n[0];//25
		}
		for (int i = 1; i <= n[1]; i++)
		{
			if ((n[0] % i == 0) && (n[1] % i == 0)) res += i;
		}
		printf("the sum of the numbers that devide %d and %d: %d\n", n[0], n[1], res);
		exe5_h6();
		return 0;
	}



	//h7 .
	int exe5_h7() {
		int n;
		double root;
		printf("please enter number \n");
		scanf("%d", &n);
		root = sqrt((double)n, 2);
		return (root == (int)root) ? 1 : 0;
	}

	//h8
	int exe5_h8() {
		int num, ld;
		printf("please enter number \n");
		scanf("%d", &num);
		for (ld = 2; num % ld != 0; ld++);
		printf("%d\n", ld);
		return 0;
	}

	//h9
	int exe5_h9() {
		int num, gd = 1;
		printf("please enter number \n");
		scanf("%d", &num);
		if (num <= 1) {
			printf("wrong input\n");
			exe5_h9();
			return 0;
		}
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0) gd = i;
		}
		return gd;
	}


	//h10
	int exe5_h10() {
		int numerator, denominator, gcd;
		printf("please enter numerator and denominator\n");
		scanf("%d%d", &numerator, &denominator);
		if (denominator == 0) {
			printf("denominator can not be zero!\n");
			exe5_h9();
			return 0;
		}
		gcd = exe5_getGCD(numerator, denominator);
		printf("%d/%d=%d/%d\n", numerator, denominator, numerator / gcd, denominator / gcd);
		exe5_h9();
		return 0;
	}

	//h11
	int exe5_h11() {
		int n[2], lcm;
		printf("please enter 2 numbers \n");
		scanf("%d%d", &n[0], &n[1]);
		for (lcm = 2; !((lcm % n[0] == 0) && (lcm % n[1] == 0)); lcm++);
		printf("lcm: %d\n", lcm);
		return lcm;
	}