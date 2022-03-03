// Course: introduction to computer science
// exercise 1, question 4
// file name: ex1_q4.c
#define _CRT_SECURE_NO_WARNINGS
// --------------------------- //
// include package section:
#include <stdio.h>
// --------------------------- //


// --------------------------- //
// function declaration section:
unsigned long student_id();
int sum_proper_divisors(int);
void amicable_numbers(int);
void print_amicable_pair(int, int);
// --------------------------- //


// --------------------------- //
// DO NOT CHANGE the following function:
void main()
{
	unsigned long id_num;
	int num;
	// read input:
	printf("Enter a number and the program will print all the amicable numbers in this field: ");
	scanf("%d", &num);
	// call functions:
	id_num = student_id();
	amicable_numbers(num);
	// write output:
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

int sum_proper_divisors(int num)
{
	// Your code:
	int i, sum = 1;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0) sum += i;
	}
	return sum;
}

void amicable_numbers(int num)
{
	// Your code:
	int i, j, last = 0;
	for (i = 1; i < num; i++) 
	{
		if(i != last) {
		j = sum_proper_divisors(i);
		if ((i == sum_proper_divisors(j)) && (i != j))
		{
			if (i < j) print_amicable_pair(i, j);
			last = j;
		}
	}

	}
}


// DO NOT CHANGE the following function:
void print_amicable_pair(int num1, int num2)
{
	// write output:
	printf("(%4d ,  %4d )\n", num1, num2);
}
// --------------------------- //