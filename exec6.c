#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>;
#include <math.h>;

void exec6() {
	int status;
	printf("select class/home (0/1)\n");
	scanf("%d", &status);
	if (status == 0) {
		printf("select number of extersize\n");
		scanf("%d", &status);
		switch (status)
		{
		case 1:
			exec6_c1();
			break;
		case 2:
			exec6_c2();
			break;
		case 3:
			exec6_c3();
			break;
		case 4:
			exec6_c4();
			break;
		case 5:
			exec6_c5();
			break;
		default:
			exec6();
			break;
		}
	}
	else
	{
		printf("select number of extersize\n");
		scanf("%d", &status);
		switch (status)
		{
		case 1:
			exec6_h1();
			break;
		case 2:
			exec6_h2();
			break;
		case 3:
			exec6_h3();
			break;
		case 4:
			exec6_h4();
			break;
		case 5:
			exec6_h5();
			break;
		case 6:
			exec6_h6();
			break;
		case 7:
			exec6_h7();
			break;
		case 8:
			exec6_h8();
			break;
		case 9:
			exec6_h9();
			break;
		case 10:
			exec6_h10();
			break;
		case 11:
			exec6_h11();
			break;
		case 12:
			exec6_h12();
			break;
		default:
			exec6();
			break;
		}
	}
}

//---------------class---------------------\\
//c1
int exec6_c1() {
	int num;
	printf("enter please some num\n");
	scanf("%d", &num);

	printf("res : %d\n", exec6_iseven(num));
	return 0;
}

int exec6_iseven(int num) {
	if (num % 2 == 0)
		return 1;
	if (num < 10)
		return 0;
	return exec6_iseven(num / 10);
}
//c2
int exec6_c2() {
	int n;
	printf("enter please some n\n");
	scanf("%d", &n);

	printf("res recursive : %d\n", exec6_fibonr(n));
	printf("res : %d\n", exec6_fibon(n));
	return 0;
}
int exec6_fibonr(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	return exec6_fibonr(n - 2) + exec6_fibonr(n - 1);
}
int exec6_fibon(int n) {
	int a[] = { 0,1}, i;
	if (n == 0) return 0;
	if (n == 1) return 1;

	for (i = 2; i <= n; i++)
	{
		a[0] += a[1];
		a[1] = a[0] - a[1];
	}

	return a[1] + a[0];
}

//c3
int exec6_c3() {
	int n;
	printf("enter please some n\n");
	scanf("%d", &n);
	printf("Res A: %d \n", exec6_c3_A(n));
	printf("Res B: %d \n", exec6_c3_B(n));
	printf("Res C: %d \n", exec6_c3_C(n));
	return 0;
}
int exec6_c3_A(int n) {
	if (n == 0) return 0;
	n /= 10;
	return 1 + exec6_c3_A(n);
}
int exec6_c3_B(int n) { 
	if (n == 0) return 0;
	return n % 10 + exec6_c3_B(n / 10);
}
int exec6_c3_C(int n) { 
	int res = 1;
	if (n / 100 != 0) {
		if (n % 10 < (n/10)%10) res = 1;
		else res = 0;
	}
	else res = 2;
	if (res == 1) {
		if ((n / 10) % 10 != 0) if (exec6_c3_C(n / 10) == 0) return 0;
		else return 1;
	}
	return res;
}
//c4
int exec6_c4() {
	int n;
	printf("enter please some n\n");
	scanf("%d", &n);
	printf("Res: %d \n", exec6_c4_a(n));

	return 0;
}
int exec6_c4_a(int n) {
	int i = 0, count = 0;
	printf("enter some numbers and finsih with -1\n");
	while (i != -1)
	{
		scanf("%d", &i);
		if (i < n && i != -1) count++;
	}
	printf("\n");
	return count;
}
//c5
int exec6_c5() {
	int n;
	printf("enter please some n\n");
	scanf("%d", &n);
	exec6_c5_A(n);
	printf("\n");
	exec6_c5_B(n);
	printf("\n");
	exec6_c5_C(n);
	return 0;
}
int exec6_c5_A(int n) {
	printf("%d\t", n);
	if (n > 1) exec6_c5_A(n - 1);
	return 0;
}
int exec6_c5_B(int n) {

	if (n > 1) exec6_c5_B(n - 1);
	printf("%d\t", n);
	return 0;
}
int exec6_c5_C(int n) {
	if (n == 1) printf("1\t");
	else {
		printf("%d\t", n);
		exec6_c5_C(n -1);
		printf("%d\t", n);
	}
	return 0;
}
//---------------home---------------------\\//
//h1
int exec6_h1() {
	int x, n;
	printf("enter some number and some power\n");
	scanf("%d%d", &x, &n);
	printf("the ans: %d\n",exec_h1_pow(x, n));
	return 0;
}
int exec_h1_pow(int x, int n) {
	if (n == 0) return 1;
	if (n % 2 == 0) return 2 * exec_h1_pow(x, n);
	else return exec_h1_pow(x, n) * x;
}
//h2
int exec6_h2() {
	int n;
	printf("enter some number\n");
	scanf("%d", &n);
	printf("the ans rec: %d\n", exec_h2_recloc(n));
	printf("the ans no rec: %d\n", exec_h2_norecloc(n));
	return 0;
}
int exec_h2_recloc(int n) {
	if (n == 0) return 2;
	if (n == 1) return 1;
	if (n > 1) return exec_h2_recloc(n - 1) + exec_h2_recloc(n - 2);
	return 0;
}
int exec_h2_norecloc(int n) {
	int res, i, a[2] = {0,0};
	for (i = 0; i < n; i++)
	{
		if (i == 0) a[0] = 2;
		else if (i == 1) a[1] = 1;
		else {
			a[0] = a[1];
			a[1] = res;
		}
		res = a[0] + a[1];
	}
	return res;
}
//h3
int exec6_h3() {
	int n;
	printf("enter some number\n");
	scanf("%d", &n);
	printf("the ans rec: %d\n", exec_h3_recpol(n));
	printf("the ans no rec: %d\n", exec_h3_noreocpol(n));
	return 0;
}
int exec_h3_recpol(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	if (n > 1) return 2* exec_h3_recpol(n - 1) + exec_h3_recpol(n - 2);
	return 0;
}
int exec_h3_noreocpol(int n) {
	int res = 1, i, a[2] = { 0,0 };
	for (i = 0; i <= n; i++)
	{
		if (i == 0) {
			a[0] = 0;
		}
		else if (i == 1) {
			a[0] = 1;
		}
		else {
			a[0] = a[1];
			a[1] = res;
		}
		res = a[0] + 2*a[1];
	}
	return res;
}
//h4
int exec6_h4() {
	int n;
	printf("enter some number\n");
	scanf("%d", &n);
	printf("the ans rec: %d\n", exec_h4_recseq(n));
	printf("the ans no rec: %d\n", exec_h4_norecseq(n));
	return 0;
}
int exec_h4_recseq(int n) {
	if (n == 0) return 1;
	if (n == 1) return 1;
	if (n == 2) return 1;
	if (n > 1) if(n %2 == 0)return exec_h4_recseq(n - 1) + exec_h4_recseq(n - 2) + exec_h4_recseq(n - 3);
	else return exec_h4_recseq(n - 1) - exec_h4_recseq(n - 3);
	return 0;
}
int exec_h4_norecseq(int n) {
	int i, a[3] = {1,1,1}, res;
	for (i = 0; i < n; i++)
	{
		if (i == 0 || i == 1 || i == 2) res = 1;
		a[0] = a[1];
		a[1] = a[2];
		a[2] = res;
		if (i % 2 == 0) res = a[2] + a[1] + a[0];
		else res = a[2] - a[0];
	}
	return res;
}
//h5
int exec6_h5() {
	int n;
	printf("enter some number\n");
	scanf("%d", &n);
	printf("%d", exec6_h5_a(n));
	return 0;
}
int exec6_h5_a(int n) {
	int i = 0, num = 0;
	printf("enter some numbers and finsih with -1\n");
		scanf("%d", &i);
		if (i == -1) return 0;
		num = exec6_h5_a(n);
		if (n < i && i > num) return i;
		else if (n < num && i < num) return num;
		else return 0;
}
//h6
int exec6_h6() {
	int n;
	printf("enter some number\n");
	scanf("%d", &n);
	printf("%d", exec6_h6_a(n));
	return 0;
}
int exec6_h6_a(int n) {
	int i = 0, num = 0;
	printf("enter some numbers and finsih with -1\n");
	scanf("%d", &i);
	if (i == -1) return n;
	num = exec6_h6_a(n);
	if (n > i && i < num) return i;
	else if (n > num && i > num) return num;
	else return n;
}
//h7
int exec6_h7() {
	int n;
	printf("enter some number\n");
	scanf("%d", &n);
	printf("in binary: \t", n % 2);
	exec6_h7_binary(n);
	return 0;
}
int exec6_h7_binary(int n) {
	int cur = n % 2;
	if (n  != 0) {
		exec6_h7_binary(n / 2);
		printf("%d \t", cur);
	}
	return 0;
}
//h8
int exec6_h8() {
	int n;
	char c[2];
	printf("enter some number\n");
	scanf("%d%c", &n, c);
	c[0] = getchar();
	scanf("%c", &c[1]);
	c[1] = getchar();
	exec6_h8_fun(n,c[0],c[1]);
	return 0;
}

int exec6_h8_fun(int n, char c, char cc) {
	if (n > 0)
		if (cc == 0) {
			printf("%c", c);
			exec6_h8_fun(n - 1, c, 0);
		}
		else if (c == 0) {
			printf("%c", cc);
			exec6_h8_fun(n - 1, 0, cc);
		}
		else if (c != 0 && cc != 0) {
			exec6_h8_fun(n, c, 0);
			n *= 2;
			exec6_h8_fun(n, 0, cc);
		}
	return 0;
}
// h9
int exec6_h9() {
	int n;
	printf("enter some number\n");
	scanf("%d", &n);
	printf("num:%d\nfunction A:%d\nfunction B:%d\n", n, exec6_h9_A(n), exec6_h9_B(n));
	return 0;
}
int exec6_h9_A(int n) {
	int num, num2 = 0;
	num = n % 10;
	if (num >= 0) num += 9;
	else num--;
	if (n / 10 != 0) num2 = exec6_h9_A(n / 10);
	return (num2 * 10) + num;
}
int exec6_h9_B(int n) {
	int num, num2 = 0;
	num = n % 10;
	if (num <= 9) num -= 9;
	else num++;
	if (n / 10 != 0) num2 = exec6_h9_B(n / 10);
	return (num2 * 10) + num;
}

//h10
int exec6_h10() {
	int n;
	printf("enter some number\n");
	scanf("%d", &n);
	printf("res: %d\n", exec6_h10_Fun(n));
	return 0;
}
int exec6_h10_Fun(int n) {
	int cur;
	if (n / 100 > 0) {
		if (exec6_h10_Fun(n / 100 + (((n % 100) / 10) + ((n % 100) % 10))) == 1) return 1;
		else return 0;
	} else if (n % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
//h11
int exec6_h11() {
	int n;
	printf("enter some number\n");
	scanf("%d", &n);
	printf("res: %d\n", exec6_h11_Fun(n));
	return 0;
}
//copy ke an li coh
int exec6_h11_Fun(int num) {
	if (num < 10)
		return num % 2 == 0;
	if (num < 100)
		return (num % 2 == 0) && (num / 10 % 2 == 1);
	if ((num % 2 == 0) && (num / 10 % 2 == 1))
		return exec6_h11_Fun(num / 100);
	return 0;

}
//h12
int exec6_h12() {
	int n;
	printf("enter some number\n");
	scanf("%d", &n);
	printf("res: %d\n", exec6_h12_Fun(n));
	exec6_h12();
	return 0;
}
int exec6_h12_Fun(int n) {
	int a[2] = {0}, num = 1;
	if (n / 100 > 0) {
		num = exec6_h12_Fun(n / 10);
		a[1] = (n / 10) % 10;
	} else a[1] = n / 10;
	a[0] = n % 10;
	if (((a[0] % 2 == 0 && a[1] % 2 != 0) && (num == 1)  )||( (a[0] % 2 != 0 && a[1] % 2 == 0) && (num == 1))) return 1;
	else return 0;
}
