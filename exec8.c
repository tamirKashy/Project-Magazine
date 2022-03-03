#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>;
#include <math.h>;
#include <stdlib.h>;
#include <assert.h>;

void exec8() {
	int status;
	printf("select class/home (0/1)\n");
	scanf("%d", &status);
	if (status == 0) {
		printf("select number of extersize\n");
		scanf("%d", &status);
		switch (status)
		{
		case 1:
			exec8_c1();
			break;
		case 2:
			exec8_c2();
			break;
			case 3:
				exec8_c3();
				break;
			case 4:
				exec8_c4();
				break;
			case 5:
				exec8_c5();
				break;
		default:
			exec8();
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
				exec8_h1();
				break;
			case 2:
				exec8_h2();
				break;
			case 3:
				exec8_h3();
				break;
			case 4:
				exec8_h4();
				break;
			case 5:
				exec8_h5();
				break;
			case 6:
				exec8_h6();
				break;
			case 7:
				exec8_h7();
				break;
			case 8:
				exec8_h8();
				break;
			case 9:
				exec8_h9();
				break;
			case 10:
				exec8_h10();
				break;
			//case 11:
			//	exec8_h11();
			//	break;
		default:
			exec8();
			break;
		}
	}
}
//*******class*************//
//c1
int* exec8_c1_makearry(int size) {
	int i, * arr;
	arr = (int*)calloc(size, sizeof(int));
	assert(arr);
	printf("please enter %d numbers to add to the new arry\n", size);
	for (i = 0; size > 0; i++, size--) {
		scanf("%d", &arr[i]);
	}
	return arr;
}
int exec8_c1() {
	int num = 0, * arr;
	printf("please enter how much numbers you want to be in the new arry\n");
	scanf("%d", &num);
	num;
	arr = exec8_c1_makearry(num);
	printintarr(arr, num);
	free(arr);
	return 0;
}
//c2
int* exec8_c2_fibo(int n) {
	int i, * arr;
	arr = (int*)calloc(n, sizeof(int));
	assert(arr);
	for (i = 0; i < n; i++)
	{
		if (i == 1 || i == 2) arr[i] = 1;
		else if (2 < i) arr[i] = arr[i - 2] + arr[i - 1];
	}
	return arr;
}
int exec8_c2() {
	int num = 0, * arr;
	printf("please enter n\n");
	scanf("%d", &num);
	num++;
	arr = exec8_c2_fibo(num);
	printintarr(arr, num);
	free(arr);
	return 0;
}
//c3
int exec8_c3() {
	int arr[7] = { 1,6,3,3,6,3,3 },i, times = 0;
	i = exec8_c3_func(arr, 7, &times);
	printf("The number that repeats istself the most was %d(X%d)\n", i, times);
	return 0;
}
int exec8_c3_func(int* arr, int size , int* times) {
	//int n, counter, i,j, * a;

	//a = (int*)calloc(size*2 ,sizeof(int));
	//assert(a);
	int count[10] = { 0 }, i, max;
	for (i = 0; i < size; i++)
	{
		count[arr[i]]++;
	}
	for (i = 0, max = 0; i < 10; i++)
	{
		if (count[i] > count[max]) max = i;
	}
	*times = count[max];
	return max;
}
//c4
int exec8_c4_func(int* arr, int size, int k){
	int i, *arry;
	arry = (int*)calloc(k + 1, sizeof(int));
	assert(arry);

	for (i = 0; i < size; i++)
	{
		if (arr[i] > k) {
			free(arry);
			return 0;
		}
		arry[arr[i]] ++;
	}
	for (i = 0; i < k+1; i++)
	{
		if (arry[i] != i) {
			free(arry); 
			return 0;
		}
	}
	free(arry);
	return 1;
}
int exec8_c4() {
	int num = 10, k = 4, arr[] = { 1,4,4,3,4,2,2,3,3,4 }, arr2[] = { 1,4,4,3,4,2,2,1,3,4 };
	printf("res: %d\n", exec8_c4_func(arr, num, k));
	printf("res 2: %d\n", exec8_c4_func(arr2, num, k));
	return 0;
}
//c5
int exec8_c5_func(int* arr, int n, int a, int b) {
	int maxb = b, mina = a;
	int i, count[10] = {0};
	for (i = 0; i < n; i++)
	{
		count[arr[i]]++;
	}
	for (i = 0; i < 10; i++)
	{
		if (count[i] > 0) {
			if (maxb > i && count[b] < count[i]) b = i;
			if (mina < i && count[a] > count[i]) a = i;
		}
	}
	return  (b+mina) - (a+mina);
}
int exec8_c5() {
	int arr[] = { 5,5,1,4,4,4,7,7 }, n = 8, a = 1, b = 8, arr2[] = { 5,1,6,6,9,9 };
	printf("res: %d\n", exec8_c5_func(arr, n, a, b));
	a = 1;
	b = 9;
	n = 6;
	printf("res 2: %d\n", exec8_c5_func(arr2, n, a, b));
	return 0;
}
//*--*--*--*---*--*--*--*--*--*--*--*home*--*--*--*--*--*--*--*--*--*--*//
//h1
int* exec8_h1_func(int size) {
	int i, * arr;
	arr = (int*)calloc(size, sizeof(int));
	assert(arr);
	for (i = 0; i < size; i++)
	{
		if (i == 0) arr[i] = 2;
		else if (i == 1) arr[i] = 1;
		else {
			arr[i] = arr[i - 1] + arr[i - 2];
		}
	}
	return arr;
}
int exec8_h1() {
	int num = 0, * arr;
	printf("enter the leng: \n");
	scanf("%d", &num);
	num++;
	arr = exec8_h1_func(num);
	printintarr(arr, num);
	free(arr);
	return 0;
}
//h2
int exec8_h2_func(int* arr, int* size,int isEven) {
	int i, *temp, j = 0;
	temp = (int*)calloc(*size, sizeof(int));
	for (i = 0; i < *size; i++)
	{
		if (isEven) {
			if (arr[i] % 2 == 0) {
				temp[j++] = arr[i];
			}
		}
		else {
			if (arr[i] % 2) {
				temp[j++] = arr[i];
			}
		}
	}
	free(arr);
	realloc(temp, sizeof(int)*j);
	*size = j;
	return temp;
}
int exec8_h2() {
	int i, * arr, size = 0, j = 0;
	printf("enter arry size: \n");
	scanf("%d", &size);
	arr = (int*)calloc(size, sizeof(int));
	assert(arr);
	printf("please enter numbers to the arry %d times\n", size);
	for (i = 0; i < size; i++)
	{
		scanf("%d", &j);
		arr[i] = j;
	}
	printf("turn off or on the iseven button 1/0");
	scanf("%d", &j);
	if (j == 0) j = 0;
	else j = 1;
	printintarr(arr, size);
	arr = exec8_h2_func(arr, &size, j);
	printintarr(arr, size);
	return 0;
}
//h3
int* exec8_h3_func(int* a, int* b) {
	int *c;
	c = (int*)calloc(3, sizeof(int));
	assert(c);
	c[0] = a[1] * b[2] - a[2] * b[1];
	c[1] = a[2] * b[0] - a[0] * b[2];
	c[2] = a[0] * b[1] - a[1] * b[0];
	return c;
}
int exec8_h3() {
	int a[] = { 1,2, 1 }, b[] = { 3, 3, 3 },*c;
	c = exec8_h3_func(a, b);
	printintarr(c, 3);
	free(c);
	return 0;
}
//h4
void exec8_h4_func(int* arr, int n) {
	int* temp, i, j;
	temp = (int*)calloc(n, sizeof(int));
	assert(temp);
	for (i = 0; i < n; i++)
	{
		temp[i] = 1;
		for (j = 0; j < n; j++)
		{
			if (i != j) {
				temp[i] *= arr[j];
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		arr[i] = temp[i];
	}
}
int exec8_h4() {
	int arr[] = { 1,2,2,4,1 }, n = 5;
	printintarr(arr, n);
	exec8_h4_func(arr, n);
	printintarr(arr, n);
	return 0;
}
//h5
int* exec8_h5_func(int* arr, int *n) {
	int* temp, i, j = 0, flag = 0,count = 0;
	temp = (int*)calloc(*n, sizeof(int));
	assert(temp);
	for (i = 0; i <= *n; i++)
	{
		for (flag = -1, j = 0; j < *n; j++)
		{
			if (arr[j] != i && flag != 0) {
				flag = 1;
			}
			else flag = 0;
		}
		if (flag == 1) {
			temp[count++] = i;
		}
	}
	if (count == 0) {
		temp[0] = 0;
		count = 1;
	}
	temp = realloc(temp, count*sizeof(int));
	*n = count;
	assert(temp);
	return temp;
}
int exec8_h5() {
	int arr[] = { 1,2,3,4,5,6 }, n = 6, *ar;
	printintarr(arr, n);
	ar = exec8_h5_func(arr, &n);
	printintarr(ar, n);
	free(ar);
	return 0;
}
//h6
int exec8_h6_func(int* arr, int n) {
	int i, * count, max = -1;
	count = (int*)calloc(n, sizeof(int));
	assert(count);
	for (i = 0; i < n; i++)
	{
		count[arr[i]]+=1;
	}
	for (i = 0; i < n; i++)
	{
		if (count[i] > count[max] && count[i] > n/2) max = i;
	}
	free(count);
	return max;
}
int exec8_h6() {
	int arr[] = { 1,1,3,2,2 }, n = 5, res;
	printintarr(arr, n);
	res = exec8_h6_func(arr, n);
	printf("\nres: %d\n", res);
	return 0;
}
//h7
int exec8_h7_func(int* arr, int n) {
	int i, * count, max = 0;
	count = (int*)calloc(n, sizeof(int));
	assert(count);
	for (i = 0; i < n; i++)
	{
		count[arr[i]]++;
	}
	for (i = 0; i < n; i++)
	{
		if ((count[i] * i) > (max * count[max])) max = i;
	}
	free(count);
	return max;
}
int exec8_h7() {
	int arr[] = { 1,4,2,2,3,3,2,2,7 }, n = 9, res;
	printintarr(arr, n);
	res = exec8_h7_func(arr, n);
	printf("\nres: %d\n", res);
	return 0;
}
//h8
int exec8_h8_func(int* arr, int n) {
	int i, * count, max = 0;
	count = (int*)calloc(n+1, sizeof(int));
	assert(count);
	for (i = 0; i < n; i++)
	{
		count[arr[i]]++;
	}
	for (i = 0; i < n; i++)
	{
		if (count[i] == 0 && i > max) max = i;
	}
	free(count);
	return max;
}
int exec8_h8() {
	int arr[] = { 7,4,5,6,1,4,0 }, n = 7, res;
	printintarr(arr, n);
	res = exec8_h8_func(arr, n);
	printf("\nres: %d\n", res);
	return 0;
}
//h9
void exec8_h9_func(int* arr, int n, int amount) {
	int i,j, * temp, max = 0;
	temp = (int*)calloc(n + 1, sizeof(int));
	assert(temp);
	for (j = 0; j < amount; j++)
	{
		temp[0] = arr[n - 1];
		temp[1] = arr[0];
		for (i = 1; i < n; i++)
		{
			temp[i + 1] = arr[i];
		}
		for (i = 0; i < n; i++)
		{
			arr[i] = temp[i];
		}
	}

	free(temp);
	return max;
}
int exec8_h9() {
	int arr[] = { 1,6,2,3,4,2 }, n = 6, amount = 1, res;
	printintarr(arr, n);
	exec8_h9_func(arr, n,amount);
	printintarr(arr, n);
	return 0;
}
//h10
void exec8_h10_func(int* arr, int n) {
	int i,j, flag = 0;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1, flag = 0; j < n && flag == 0; j++)
		{
			if (arr[i] < arr[j]) {
				arr[i] = arr[j];
				flag = 1;
			}
		}
		if (flag == 0) arr[i] = -1;
	}
}
int exec8_h10() {
	int arr[] = { 6,3,9,10,11,5 }, n = 6;
	printintarr(arr, n);
	exec8_h10_func(arr, n);
	printintarr(arr, n);
	return 0;
}

