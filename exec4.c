#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>;
#include <math.h>;

void exec4() {
	int status;
	printf("select class/home (0/1)\n");
	scanf("%d", &status);
	if (status == 0) {
		printf("select number of extersize\n");
		scanf("%d", &status);
		switch (status)
		{
		case 1:
			exe4_c1();
			break;
		case 2:
			exe4_c2();
			break;
		case 3:
			exe4_c3();
			break;
		case 4:
			exe4_c4();
			break;
		case 5:
			exe4_c5();
			break;
		default:
			exec4();
			break;
		}
	}
	else
	{
		switch (status)
		{
		case 1:
			exe4_h1();
			break;
		case 2:
			exe4_h2();
			break;
		case 3:
			exe4_h3();
			break;
		case 4:
			exe4_h4();
			break;
		case 5:
			exe4_h5();
			break;
		case 6:
			exe4_h6();
			break;
		case 7:
			exe4_h7();
			break;
		case 8:
			exe4_h8();
			break;
		case 9:
			exe4_h9();
			break;
		case 10:
			exe4_h10();
			break;
		case 11:
			exe4_h11();
			break;
		case 12:
			exe4_h12();
			break;
		case 13:
			exe4_h13();
			break;
		default:
			exec4();
			break;
		}
	}
}
//class
int exe4_c1() {
	int num = 0, sum = 0;
	for (num = 15; num < 1001; num += 15) {
		if (num % 3 == 0 && num % 5 == 0) {
			sum += num;
		}
	}
	printf("(1)sum:%d\n", sum);
	num = 0, sum = 0;
	for (num = 3; num < 1001; num++) {
		if (num % 3 == 0 || num % 5 == 0) {
			sum += num;
		}
	}
	printf("(2)sum:%d\n", sum);
	return 0;
}
int exe4_c2() {
	int n = 5, num = 0, onum = 0, flag = 0, status = 0;
	printf("auto(1)/manual(0)\n");
	scanf("%d", &status);
	printf("please print %d numbers\n", n);
	if (status == 0) {
		do {
			if (num != 0) onum = num;
			scanf("%d", &num);
			if (onum < num && flag == 0) flag = 0;
			else flag = 1;
			n -= 1;
		} while (n > 0);
		if (flag == 0) printf("Very ascending\n");
		else  printf("not Very ascending\n");
	}
	else if (status == 1) {
		do {
			if (num != 0) onum = num;
			scanf("%d", &num);
			if (onum < num && flag == 0) flag = 0;
			else flag = 1;
			n -= 1;
			if (flag == 0 && n == 0) printf("Very ascending\n");
			else if (flag == 1) {
				printf("not Very ascending\n");
				break;
			}
		} while (n > 0);
	}
	else exe4_c2();
	return 0;
}
int exe4_c3() {
	int n, t, e = 0, ue = 0;
	printf("enter some number\n");
	scanf("%d", &n);
	if (n < 0) {
		printf("error try agine\n");
		exe4_c3();
		return 0;
	}
	for (; n > 0; ) {
		t = n % 10;
		if (t % 2 == 0) e += t;
		else ue += t;
		n /= 10;
	}
	printf("res: %d\n", e - ue);
	return 0;
}
int exe4_c4() {
	int i, x = 0;
	double   n = 0.0;
	do {
		printf("enter binner number 0/1 to finish please enter some number out of this range\n");
		scanf("%d", &i);
		if (i > 1) break;
		n += pow(2, x) * i;
		x++;
	} while (i <= 1);
	printf("res: %.2lf\n", n);
	return 0;
}
int exe4_c5() {
	int l = 1, i = 9, res, n1 = 1, n2 = 1, n3 = 1, t = 729;
	do {
		printf("%5d", n1 * 100 + n2 * 10 + n3);
		n1++;
		if (n1 > 9) {
			n1 = 1;
			if (n2 < 9)n2++;
			else {
				n2 = 1;
				n3++;
				//if (n3 > 9) break;
			}
		}
		i--;
		if (i == 0) {
			i = 9;
			l++;
			printf(" (%d)\n", l);
		}
		t -= 1;
	} while (t > 0);
	return 0;
}
//home
int exe4_h1() {
	int n = 0, n1 = 0, l = 0;
	printf("enter some num\n");
	scanf("%d", &n);
	/*	while (n > 0)
		{
			n1++;
			n--;
			if (n1 % 15 == 0) {
				printf("FizzBuzz,");
			} else if (n1 % 5 == 0) {
				printf("Buzz,");
			} else if (n1 % 3 == 0) {
				printf("Fizz,");
			} else if(n == 0){
				printf("%d.", n1);
			}
			else {
			printf("%d,", n1);
			}

			if (l == 10) {
				printf("\n");
			}
			l++;
		}*/
	for (; n > 0; n--) {
		n1++;
		if (n1 % 15 == 0) {
			printf("FizzBuzz,");
		}
		else if (n1 % 5 == 0) {
			printf("Buzz,");
		}
		else if (n1 % 3 == 0) {
			printf("Fizz,");
		}
		else if (n == 1) {
			printf("%d.", n1);
		}
		else {
			printf("%d,", n1);
		}

		if (l == 10) {
			printf("\n");
		}
		l++;
	}
	{

	}
	return 0;
}
int exe4_h2() {
	int num = 0, t = 25, b = 0, flag = 0;
	printf("enter some num 0 - 1000\n");
	scanf("%d", &num);
	if (num < 0 || num >= 1000) {
		printf("out of range\n");
		exe4_h2();
		return 0;
	}
	do {
		if (num >= b && num < t)
		{
			printf("the number is from %d to %d\n", b, t);
			flag = 1;
		}
		else {
			b = t;
			t += 25;
		}
	} while (flag == 0);
	return 0;
}
int exe4_h3() {
	int m, tw, te, fi, two, one;
	printf("enter number of money to convert\n");
	scanf("%d", &m);
	if (m < 0) {
		printf("wrong input\n");
		exe4_h3();
		return 0;
	}
	tw = m / 20;
	m -= tw * 20;
	te = m / 10;
	m -= te * 10;
	fi = m / 5;
	m -= fi * 5;
	two = m / 2;
	m -= two * 2;
	one = m / 1;
	m -= one * 1;
	printf("%d*20 NIS\n%d*10 NIS\n%d*5 NIS\n%d*2 NIS\n%d*1 NIS\n", tw, te, fi, two, one);
	return 0;
}
int exe4_h4() {
	int n, n1, e = 0, ue = 0;
	printf("enter how much numbers\n");
	scanf("%d", &n);
	if (n < 0) {
		printf("wrong input\n");
		exe4_h4();
		return 0;
	}
	for (; n > 0; n--)
	{
		printf("enter number bigger then 0\n");
		scanf("%d", &n1);
		if (n1 > 0) {
			if (n1 % 2 == 0) {
				e += n1;
			}
			else {
				ue += n1;
			}
		}
	}
	printf("even %d| Un Even %d\n", e, ue);
	return 0;
}
int exe4_h5() {
	int n, nn = 1, en = 0, res = 0;
	printf("enter number\n");
	scanf("%d", &n);
	if (n < 0) {
		printf("wrong input\n");
		exe4_h5();
		return 0;
	}
	for (int i = 1; i < n + 1; i++)
	{
		nn *= i;
	}
	for (int i = 1; i < n + 1; i++)
	{
		en += i;
	}
	res = nn / en;
	printf("res %d\n", res);
	return 0;
}
int exe4_h6() {
	int n, min = 0, max = 0, res = 0, i = 0;
	printf("enter how much numbers\n");
	scanf("%d", &n);
	do
	{
		if (n < 0) {
			printf("wrong input\n");
			n = 0;
		}
		if (i == 0) min = n;
		res += n;
		if (n > max) max = n;
		if (n < min) min = n;
		i++;
		printf("enter how much numbers\n");
		scanf("%d", &n);
	} while (n != -1);
	printf("%d numbers, max = %d, min = %d, sum %d\n", i, max, min, res);
	exe4_h6();
	return 0;
}
int exe4_h7() {
	int n, a[31], i;
	printf("enter number to convert to binary\n");
	scanf("%d", &n);
	for (i = 0; n > 0; i++)
	{
		a[i] = n % 2;
		n /= 2;
	}
	for (i = i - 1; i != -1; i--)
	{
		if (i == 0) printf("%d.", a[i]);
		else printf("%d,", a[i]);
	}
	return 0;
}
int exe4_h8() {
	int n;
	double a1, q, an, s, po, c;
	printf("enter number to for the first number, q, n\n");
	scanf("%lf%lf%d", &a1, &q, &n);
	po = q;
	for (c = n - 1; c < 0; --c)
	{
		po *= q * q;
	}
	an = a1 * pow(q, n - 1);
	po = q;
	for (c = n; c < 0; --c)
	{
		po *= q;
	}
	s = (a1 * (pow(q, n) - 1)) / (q - 1);
	printf("s: %.1lf| a%d: %.1lf", s, n, an);
	return 0;
}
int exe4_h9() {
	int n, i;
	double s;
	printf("please enter some number\n");
	scanf("%d", &n);
	if (n % 2 == 0) {
		printf("the number is even\n");
		exe4_h9();
		return 0;
	}

	i = n;
	s = 1;
	for (double p = 2, r = 3; i > 0 && n > 1; --i, r++, p++)
	{
		s = s + (p / r);
	}
	printf("the number is uneven S:\n%.2lf\n", s);
	exe4_h9();
return 0;
}
int exe4_h10() {
	int n, max = 0, min = 999999999, i, p[3];
	printf("enter some number bigger then 0:\n");
	scanf("%d", &n);
	if (n <= 0) {
		printf("wrong input\n");
		exe4_h10();
		return 0;
	}
	p[0] = -1;
	do {
		p[0] += 1;
		i = n % 10;
		if (i > max && i != 0 || i == max && i != 0) {
			max = i;
			p[1] = p[0];
		}
		if (i < min && i != 0 || i == min && i != 0) {
			min = i;
			p[2] = p[0];
		}
		n /= 10;
	} while (n != 0);
	printf("min %d position %d, max %d position %d\n", min, p[2], max, p[1]);
	return 0;
}
int exe4_h11() {
	int n, max = 0, min = 999999999, i[2], p[3], t;
	printf("enter some number bigger then 0:\n");
	scanf("%d", &n);
	if (n <= 0) {
		printf("wrong input\n");
		exe4_h11();
		return 0;
	}
	t = n;
	i[1] = 0;
	while (t != 0) {
		i[1] += 1;
		t /= 10;
	}
	p[0] = i[1];
	do {
		p[0]--;
		i[0] = n % 10;
		if (i[0] > max && i[0] != 0 || i[0] == max && i[0] != 0) {
			max = i[0];
			p[1] = p[0];
		}
		if (i[0] < min && i[0] != 0 || i[0] == min && i[0] != 0) {
			min = i[0];
			p[2] = p[0];
		}
		n /= 10;
	} while (n != 0);
	//printf("min %d position %d, max %d position %d\n", min, p[2], max, p[1]);
	printf("Max = %d, at position: %d, Min = %d, at position: %d\n", max, p[1], min, p[2]);
	exe4_h11();
	return 0;
}
int exe4_h12() {
	int n;
	double e = 1, ue = 1;
	printf("enter some number bigger then 0:\n");
	scanf("%d", &n);
	if (n <= 0) {
		printf("wrong input\n");
		exe4_h12();
		return 0;
	}
	while (n > 0) {
		if ((n % 10) % 2 == 0) e *= n % 10;
		else ue *= n % 10;
		n /= 10;
	}
	printf("res %.2lf\n", e / ue);
	exe4_h12();
	return 0;
}
int exe4_h13() {
	int a, g, c;
	srand(time(NULL));
	a = rand() % 10;
	a = rand() % 10;
	while (a <= 0 || a > 10) {
		a = rand() % 10;
		a += 2;
		if (!(a % 2)) a -= rand() % 10;
	}
	printf("The computer selected number from 1-10 you have to guess the number\n");
	//printf("ans: %d\n", a);
	printf("please enter an answer: ");
	scanf("%d", &g);
	c = 1;
	while (a != g) {
		c++;
		printf("please enter another answer: ");
		scanf("%d", &g);
	}
	switch (c)
	{
	case 1:
		printf("I believe you have cheated...\n\n\n\n");
		break;
	case 2:
	case 3:
		printf("Excellent game!\n\n\n\n");
		break;
	case 4:
	case 5:
		printf("You played well!\n\n\n\n");
		break;
	case 6:
	case 7:
		printf("Average game.\n\n\n\n");
		break;
	case 8:
	case 9:
	case 10:
		printf("poor game.\n\n\n\n");
		break;
	default:
		printf("Seriously? There are only ten choices...\n\n\n\n");
		break;
	}
	//printf("correct ! attempt %d\n\n", c);
	exe4_h13();
	return 0;
}
void prs(int x1, int y1, int z1, int x2, int y2, int z2, int x3, int y3, int z3) {
	int  v1, v2, v3, d;
	v1 = y1 * z2 - y2 * z1;
	v2 = x1 * z2 - z1 * x2;
	v2 = -v2;
	v3 = x1 * y2 - x2 * y1;
	printf("(%d,%d,%d) X (%d,%d,%d) = (%d,%d,%d)\n", x1, y1, z1, x2, y2, z2, v1, v2, v3);
	printf("to devide ? (0 no, else the number to devide)\n");
	scanf("%d", &d);
	if (d != 0 && v1 % d == 0 && v2 % d == 0 && v3 % d == 0) {
		v1 /= d;
		v2 /= d;
		v3 /= d;
	}
	d = v1 * x3 + v2 * y3 + v3 * z3;
	printf("(%d,%d,%d) * (%d,%d,%d) = %d\n\n\n", v1, v2, v3, x3, y3, z3, d);
	return;
}