#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>;
#include <math.h>;

void exec7() {
	int status;
	printf("select class/home (0/1)\n");
	scanf("%d", &status);
	if (status == 0) {
		printf("select number of extersize\n");
		scanf("%d", &status);
		switch (status)
		{
		case 1:
			exec7_c1();
			break;
		case 2:
			exec7_c2();
			break;
			case 3:
				exec7_c3();
				break;
			case 4:
				exec7_c4();
				break;
			case 5:
				exec7_c5();
				break;
		default:
			exec7();
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
				exec7_h1();
				break;
			case 2:
				exec7_h2();
				break;
			case 3:
				exec7_h3();
				break;
			case 4:
				exec7_h4();
				break;
			case 5:
				exec7_h5();
				break;
			case 6:
				exec7_h6();
				break;
			case 7:
				exec7_h7();
				break;
			case 8:
				exec7_h8();
				break;
			case 9:
				exec7_h9();
				break;
			case 10:
				exec7_h10();
				break;
			case 11:
				exec7_h11();
				break;
		default:
			exec7();
			break;
		}
	}
}
//*******class*************//
//c1
int exec7_c1() {
	int num = 5, arr[] = { 1,2,3,4,5 };

	exec7_c1_func(arr, num);
	return 0;
}
int exec7_c1_func(int* arr, int n) {
	int i;
	printf("arr:");
	for (i = 0; i < n; i++)
	{
		printf("\t%d", arr[i]);
	}
	printf("\n");
	return 0;
}
//c2
int exec7_c2() {
	int num = 5, arr[] = { 1,2,3,4,5 }, max = 0, min, sum = 0, isEven = 0;
	double avg = 0;

	exec7_c2_func(arr, num, &max, &min, &sum, &avg, &isEven);
	printf("Max: %d  Min: %d sum: %d ", max, min, sum);
	printf("avg: %.2lf isEven (1/0)? %d", avg, isEven);
	return 0;
}
int exec7_c2_func(int* arr, int n, int* max, int* min, int* sum, double* avg, int* isEven) {
	int i, cur;
	*min = arr[0];
	for (i = 0; i < n; i++)
	{
		cur = arr[i];
		if (cur < *min) *min = cur;
		if (cur > *max) *max = cur;
		if (cur % 2 == 0) *isEven = 1;
		*sum = (*sum) + cur;
	}
	*avg = (*sum) / (double)n;
}
//c3
int exec7_c3() {
	int num = 5, arr[] = { 1,3,2,6,11 }, ans = 1;
	printf("no rec: %d   ", exec7_c3_funcA(arr, num, &ans));
	printf("%d\n\n", ans);
	ans = 1;
	printf("rec: %d    ", exec7_c3_funcB(arr, num, &ans));
	printf("%d\n", ans);
	return 0;
}
int exec7_c3_funcA(int* arr, int n, int* ans) {
	int i, cur,las = 0,res = 1;
	for (i = 0; i < n; i++)
	{
		cur = arr[i];
		if (cur >= las && res != 0) res = 1;
		else res = 0;
		if (cur == las && res != 0) *ans = 0;

		las = cur;
	}
	if (*ans == 1 && res == 0) *ans = 0;
	return res;
}
int exec7_c3_funcB(int* arr, int n, int* ans) {
	int boolen =1;
	if ((n - 1) >= 2) {
		if (arr[0] == arr[1] && *ans == 1) *ans = 0;
		boolen = exec7_c3_funcB((++arr), n - 1, ans);
	}
	if (boolen == 0) return 0;
	else {
		if (arr[0] <= arr[1]) boolen = 1;
		else {
			boolen = 0;
			*ans = 0;
		}
	}
	return boolen;
}
//c4
int exec7_c4() {
	//i ddient understand
	return 0;
}
//c5
int exec7_c5() {
	int num = 5, arr[] = { 1,2,3,4,5 };

	exec7_c5_func_norec(arr, num);
	exec7_c5_func_rec(arr, num);
	return 0;
}
int exec7_c5_func_norec(int* arr, int n) {
	int i, temp;
	for (i = 0; i < n && i != (n - 1 - i); i++)
	{
		temp = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 - i] = temp;
	}
	exec7_c1_func(arr, n);
	return 0;
}
int exec7_c5_func_rec(int* arr, int n) {
	
	return 0;
}
//*******home*************//
//h1
int exec7_h1() {
	int a = 2, b = 3, c = 4;
	exec7_h1_func(&a, &b, &c);
	printf("Max= %d, mid= %d, min= %d", a, b, c);
	return 0;
}
int exec7_h1_func(int* max, int* mid, int* min) {
	int temp;
	if (*min > *mid) {
		temp = *mid;
		*mid = *min;
		*min = temp;
	}
	if (*min > *max) {
		temp = *max;
		*max = *min;
		*min = temp;
	}
	if (*mid > *max) {
		temp = *max;
		*max = *mid;
		*mid = temp;
	}
	return 0;
}
//h2
double exec7_h2_func(int num, double* digit) {
	double avg = 0, count = 0, currnum;
	while (num > 0)
	{
		currnum = num % 10;
		num /= 10;
		if (currnum < *digit) {
			avg += currnum;
			count++;
		}
	}
	avg /= count;
	*digit = count;
	return avg;
}
int exec7_h2() {
	int num = 0;
	double digit = 0, k = 0;

	printf("please enter number and digit\n");
	scanf("%d%lf", &num, &digit);
	k = exec7_h2_func(num, &digit);
	printf("avg= %.2lf,digits= %.0lf\n", k, digit);
	return 0;
}
//h3
double exec7_h3_func(double* n, double x, double* c) {
	if (n >= 2) {
		*c *= *n;
		*n = *n -1;
	}
	else {
		x = 1;
	}
	return x;
}
int exec7_h3() {
	double n, x, c;
	printf("please enter n,x,c\n");
	scanf("%lf%lf%lf", &n, &x, &c);
	x = exec7_h3_func(&n, x, &c);
	printf("(c*x^n)'==(%lf*%lf^%lf) = %lf", c, x, n, c * pow(x, n));
}
//h4
int exec7_h4() {
	int arr[] = {6,8,10,5,-7,7,9,-2,13}, n= 9;
	printf("%d", exec7_h4_func(arr, n));
	return 0;
}
int exec7_h4_func(int* arr, int n) {
	int i, j=1, cur=0,max=0;
	for (i = 0; i < n-1; i++)
	{
		cur = arr[i] + arr[j];
		if (cur > max) max = cur;
		j++;
	}
	return max;
}
//h5
int exec7_h5() {
	int arr[] = { 1,6,2,4,3 }, n = 5, key= 3,num1 = 0,num2= 0;
	n = exec7_h5_func(arr, n, key, &num1, &num2);
	printf("ans:%d, num1: %d, num2: %d.\n", n, num1, num2);
	return 0;
}
int exec7_h5_func(int* arr, int n, int key, int* pnum1, int* pnum2) {
	int i, j = 1, cur = 0, min = 9+9+1;
	*pnum1 = -1;
	*pnum2 = -1;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i+1; j < n; j++)
		{
			cur = arr[i] + arr[j];
			if (cur < min && cur < key) {
				min = cur;
				*pnum1 = arr[i];
				*pnum2 = arr[j];
			}
		}
	}
	if(min < key) return min;
	return 0;
}
//h6
void exec7_h6_func(int* arr, int n, int* maxeven, int* even, int* maxodd, int* odd) {
	int i;
	*odd = *even = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] % 2) {
			if (*odd == 0) *odd = 1;
			if (*maxodd < arr[i]) *maxodd = arr[i];
		}
		else {
			if (*even == 0) *even = 1;
			if (*maxeven < arr[i]) *maxeven = arr[i];
		}
	}
}
int exec7_h6() {
	int arr[] = { 3,6,5,9,5,7,2,1 }, n = 8, maxeven = 0, maxodd = 0, even=0,odd=0;
	exec7_h6_func(arr, n, &maxeven, &even, &maxodd, &odd);
	printf("maxeven: %d,even %d, maxodd: %d,odd: %d.\n", maxeven, even, maxodd, odd);
	return 0;
}
//h7
int exec7_h7() {
	int arr[] = { 1,3,2,2,3,1 }, n = 6;
	printf("rec %d, norec %d", exec7_h7_rec(arr,n), exec7_h7_norec(arr, n));
	return 0;
}
int exec7_h7_rec(int* a, int n) {
	if (n <= 1) return 1;
	if (a[0] == a[n - 1]) {
		++a;
		if (exec7_h7_rec(a, n - 2) == 1) return 1;
		else return 0;
	}
	else return 0;
}
int exec7_h7_norec(int *a, int n) {
	int i, j = n-1;
	for (i = 0; i < n/2; i++)
	{
		if (a[i] != a[j]) return 0;
		j--;
	}
	return 1;
}
//h8
void exec7_h8_func_A(int* arr, int n) {
	if (n == 0) return;
	printf("%d\t", arr[0]);
	arr++;
	exec7_h8_func_A(arr, n - 1);
}
void exec7_h8_func_B(int *arr, int n){
	if (n == 0) return;
	printf("%d\t", arr[n - 1]);
	exec7_h8_func_B(arr, n - 1);
}
int exec7_h8() {
	int arr[] = { 1,2,3,4,5,6 }, n = 6;
	exec7_h8_func_A(arr, n);
	printf("\n");
	exec7_h8_func_B(arr, n);
	return 0;
}
//h9
double exec7_h9_func(int* arr, int n) {
	double res = 0,num = arr[0];
	if (n <= 1) return num;
	res = exec7_h9_func(++arr, n - 1);
	res *= (n - 1);
	return (num + res)/n;
}
int exec7_h9() {
	int arr[] = { 1,2,3,4,5,6 }, n = 6;
	printf("ans: %lf\n", exec7_h9_func(arr, n));
	return 0;
}
//h10
int exec7_h10_func(double* arr, int n) {
	if (n == 1) return 1;
	int num[2], hnum[2];
	num[0] = (int)arr[0];
	hnum[0] = (arr[0] - num[0]) *100;
	num[1] = (int)arr[1];
	hnum[1] = (arr[1] - num[1]) * 100;
	if ((num[0] <= num[1]) && (hnum[0] >= hnum[1]) && exec7_h10_func((++arr), n-1) == 1) return 1;
	else return 0;
}
int exec7_h10() {
	double arr[] = { 1.7,2.65,2.5,4.1 };
	int n = 4;
	printf("ans: %d\n", exec7_h10_func(arr, n));
	arr[3] = 2.7;
	n = 4;
	printf("ans: %d\n", exec7_h10_func(arr, n));
	return 0;
}
//h11
int exec7_h11_func(int* arr, int n) {
	int i;
	for (i = 0; i < n-1; i++)
	{
		if (arr[i] > arr[i + 1]) return 0;
		if (i - 1 >= 0) arr[i] += arr[i - 1];
		if (arr[i] > arr[i + 1]) return 0;
	}
	return 1;
}
int exec7_h11_func_rec(int* arr, int n) {
	if (n <= 1) return 1;
	if (arr[0] > arr[1]) return 0;
	arr[1] += arr[0];
	arr++;
	if (exec7_h11_func_rec(arr, n - 1) == 1) return 1;
	return 0;
}
int exec7_h11() {
	int arr[] = { 1,2,5,9,20,40 }, arr2[] = { 1,2,5,9,20,40 }, arr3[] = { 1,2,5,7,20,40 }, arr4[] = { 1,2,5,7,20,40 }, n = 6;

	printf("ans no rec: %d, ans rec: %d\n", exec7_h11_func(arr, n), exec7_h11_func_rec(arr2, n));
	printf("ans no rec: %d, ans rec: %d\n", exec7_h11_func(arr3, n), exec7_h11_func_rec(arr4, n));
	return 0;
}