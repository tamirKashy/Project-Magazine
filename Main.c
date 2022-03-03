#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>;
#include <stdlib.h>;
#include <assert.h>;
#include <time.h>;
#include <string.h>;


#include "homeworks_c_mavo.h"



int main() {
	//caller();
	//*/*/*/*/*/*
	//int arr[] = { 4,3,1,8,20,11,2,7 }, k = 3;
	//printintarr(arr, 7);
	//MergeSortint(arr, 0, 6);
	//printintarr(arr, 7);

	//printf("\nfound %d? %d\n",k, binary_searchInt(arr, 7, k));
	//printf("res: %d", temp(241242,2));
	execselector();
	return 0;
}
void caller() {
	//int A[] = { 1,2,5,7,9,12,13 }, B[] = { 2,3,8,9,15,22 }, * arr;
//arr = mergeint_arr(A, 7, B, 6);
//printintarr(arr, sizeof(arr)/sizeof(int));
//free(arr);
//int a[] = { 1,3,5,2,4,6,9,11,13 };
//Mergeint(a, 0, 2, 5);
//printintarr(a, sizeof(a)/sizeof(int));
// int ar[] = { 4,8,1,9,-5,3,22,-6,11,-4 };
//int ar[] = { 8,4,1,-5,9,22,11,3,-6 };
//printintarr(ar, sizeof(ar)/sizeof(int));
//MergeSortint(ar, 0, sizeof(ar)/sizeof(int)-1);
//printintarr(ar, sizeof(ar)/sizeof(int));
//int arrr[10] = { 4,-6,8,1,9,-5,3,22,11,-4 };
//printintarr(arrr, sizeof(arrr)/sizeof(int));
//printf("\n\n%d\n", partitionInt(arrr, 0, sizeof(arrr)/sizeof(int)-1));
//printintarr(arrr, sizeof(arrr) / sizeof(int));
//int arrrr[] = {4,-6,8,1,9,-5,3,22,11,-4};
//printintarr(arrrr, sizeof(arrrr) / sizeof(int));
//quickSortInt(arrrr, 0, sizeof(arrrr) / sizeof(int)-1);
//printintarr(arrrr, sizeof(arrrr)/sizeof(int));
//printf("\n\n\nfixed\n");
//int arrrrr[] = { 4,-6,8,1,9,-5,3,22,11,-4 };
//printintarr(arrrrr, sizeof(arrrrr) / sizeof(int));
//FixedquickSortInt(arrrrr, 0, sizeof(arrrrr) / sizeof(int) - 1);
//printintarr(arrrrr, sizeof(arrrrr) / sizeof(int));
// 	   //
	//char str[50],str2[50];
	//gets(str);
	//gets(str2);
	//puts(str);
	//puts(str2);
	//printf("the size of the string: %d\n", strlen(str));
	//printf("the size of the string: %d\n", strlen(str2));
	//printf("is the first is cames first ? (1 = true/-1 = false/0 = same): %d\n", strcmp(str, str2));
	//printf("is the first is cames first ? (1 = true/-1 = false/0 = same): %d\n", strcmp(str2,str));
	//puts(strcat(str, str2));
	//puts(str);
	//puts(str2);
//	//
	//typedef struct Student
	//{
	//	double age;
	//	int id;
	//	char firstname[30], lastname[30];
	//}student;
	//student a;
	//a.age = 20.5;
	//a.id = 01;
	//strcopy(a.firstname,"tamir");
	//strcopy(a.lastname, "kashy");
	//student b = { 15.7, 02, "Ron","Golan" };
}
void execselector() {
	int status;
	printf("\nselect number of extersize\n");
	scanf("%d", &status);
	switch (status)
	{
	case 1:
		exec1();
		break;
	case 2:
		exec2();
		break;
	case 3:
		exec3();
		break;
	case 4:
		exec4();
		break;
	case 5:
		exec5();
		break;
	case 6:
		exec6();
		break;
	case 7:
		exec7();
		break;
	case 8:
		exec8();
		break;
	case 9:
		exec9();
		break;
	default:
		main();
		break;
	}
}
void printintarr(int* arr, int n) {
	int i;
	printf("\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}
}
void printdoublearr(double* arr, int n) {
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%lf", arr[i]);
	}
}
void printintmatrix(int* arr[], int rows,int cols) {
	int i,j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			printf("%d\t", arr[j]);
		}
		(arr+=cols);
		printf("\n");
	}
	printf("\n");

}
void printdoublematrix(double* arr[], int rows, int cols) {
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			printf("%lf\t", arr[j]);
		}
		(arr += cols);
		printf("\n");
	}
	printf("\n");

}
int binary_searchInt(int* arr, int size, int k) {
	int i, start = 0, end = size - 1, mid;
	while (start <= end)
	{
		mid = (end - start) / 2 + start;
		if (arr[mid] == k) return mid;
		if (arr[mid] > k) {
			end = mid-1;
		}
		else {
			start = mid + 1;
		}
	}
	return -1;
}
int* mergeint_arr(int* A, int SizeA, int* B, int SizeB) {
	int i, j, k, * res;
	res = (int*)calloc(SizeA + SizeB, sizeof(int));
	assert(res);
	i = j = k = 0;
	while (i<SizeA && j < SizeB)
	{
		if (A[i] <= B[j]) res[k++] = A[i++];
		else res[k++] = B[j++];
	}
	while (i < SizeA)
	{
		res[k++] = A[i++];
	}
	while (j < SizeB)
	{
		res[k++] = B[j++];
	}

	return res;
}
void Mergeint(int* arr, int start_a, int end_a, int end_b)		 {
	int i, j, k, * temp;
	temp = (int*)calloc(end_b - start_a + 1, sizeof(int));
	assert(temp);
	for (k = 0, i = start_a, j = end_a + 1; (j <= end_b) || (i <= end_a);)
	{
		if (i<=end_a && ((j > end_b) || arr[i] <= arr[j])) temp[k++] = arr[i++];
		else if (j <= end_b && ((i > end_a) || arr[j] <= arr[i])) temp[k++] = arr[j++];
	}
	for (i = start_a, k = 0; i <= end_b; i++, k++) arr[i] = temp[k];
	free(temp);
}
void MergeSortint(int* arr, int start, int end) {
	int mid;
	if (start < end) {
		mid = (end - start) / 2 + start;
		MergeSortint(arr, start, mid);
		MergeSortint(arr, mid+1, end);
		Mergeint(arr, start, mid, end);
	}
}
void swapint(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int partitionInt(int* arr, int start, int end) {
	int pivot, i, j;
	for (j = 0, pivot = start, i = 1; i <= end; i++) if (arr[pivot] >= arr[i]) swapint(&arr[++j], &arr[i]);
	swapint(&arr[pivot], &arr[j]);
	return j;
}
void quickSortInt(int* arr, int start, int end) {
	int pos;
	if (start < end) {
		pos = partitionInt(arr, start, end);
		quickSortInt(arr, start, pos - 1);
		quickSortInt(arr, pos + 1, end);
	}
}
int FixedpartitionInt(int* arr, int start, int end) {
	int pivot, i, j;
	srand(time(NULL));
	for (j = 0, pivot = rand() % (end - start-1), i = 1; i <= end; i++) if (arr[pivot] >= arr[i]) swapint(&arr[++j], &arr[i]);
	swapint(&arr[pivot], &arr[j]);
	return j;
}
void FixedquickSortInt(int* arr, int start, int end) {
	int pos;
	if (start < end) {
		pos = FixedpartitionInt(arr, start, end);
		quickSortInt(arr, start, pos - 1);
		quickSortInt(arr, pos + 1, end);
	}
}
