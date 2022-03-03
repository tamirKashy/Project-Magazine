// Course: introduction to computer science
// exercise 1, question 1
// file name: ex1_q1.c
#define _CRT_SECURE_NO_WARNINGS
// --------------------------- //
// include package section:
#include <stdio.h>
// --------------------------- //


// --------------------------- //
// function declaration section:
unsigned long student_id();
int min_digit_rec(int);
int min_digit(int);
// --------------------------- //


// --------------------------- //
// DO NOT CHANGE the following function:
void main()
{
	unsigned long id_num;
	int num, min_dig1, min_dig2;
	// read input:
	printf("Enter an integer number\n");
	scanf("%d", &num);
	// call functions:
	id_num = student_id();
	min_dig1 = min_digit(num);
	min_dig2 = min_digit_rec(num);
	// write output:
	printf("output: the smallest digit from min_digit: %d\tand from min_digit_rec: %d\n", min_dig1, min_dig2);
	printf("[id: %lu] finished main\n", id_num);
}
// --------------------------- //


// --------------------------- //
// function implementation section:
unsigned long student_id()
{
	// return your id muber,
	// for example if your id is 595207432
	// return 595207432
	// your code:
	return 1;
}

int min_digit(int num)
{
	// Your code:
	int i, min = 1000000000; //The number 1000000000 was selected because the biggest number that could be printed is 999999999
	while (num > 0)
	{
		i = num % 10;
		num /= 10;
		if (min > i) min = i;
	}
	return min;
}

int min_digit_rec(int num)
{
	// Your code:
	//123
	int min = num % 10, i;
	if (num / 10 <= 0) return num;
	i = min_digit_rec(num/10);
	if (min > i) min = i;
	return min;
}
// --------------------------- //