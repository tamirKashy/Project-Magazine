// Course: introduction to computer science
// exercise 1, question 2
// file name: ex1_q2.c
#define _CRT_SECURE_NO_WARNINGS
// --------------------------- //
// include package section:
#include <stdio.h>
// --------------------------- //


// --------------------------- //
// function declaration section:
unsigned long student_id();
int longest_seq(int);
// --------------------------- //


// --------------------------- //
// DO NOT CHANGE the following function:
void main()
{
	unsigned long id_num;
	int n, first_day;
	// read input:
	printf("Enter the number of days: ");
	scanf("%d", &n);
	printf("Enter the sequence of amount rain in mm for %d days\n", n);
	// call functions:
	id_num = student_id();
	first_day = longest_seq(n);
	// write output:
	printf("output: the first day of the longest sequence is %d\n", first_day);
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

int longest_seq(int n)
{
	// Your code:
	int i, count = 0, mcount = 0, cday, nday, mday = 0;
	for (i = 1; i <= n+1; i++)
	{
		if (i != n+1) scanf("%d", &cday);
		else cday = 0;
		if (cday == 0) {
			if (count > mcount) {
				mcount = count;
				mday = nday;
			}
			nday = 0;
			count = 0;
		}
		else {
			if (count == 0) nday = i;
			count++;
		}
	}
	return mday;
}
// --------------------------- //