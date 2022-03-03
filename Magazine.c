#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "magazine.h"


Magazine Stuck_Create() {
	int *arr;
	Magazine Struct;
	arr = (int*)calloc(1, sizeof(int));
	assert(arr);
	Struct.Arr = arr;
	Struct.Index = 0;
	Struct.Size = 1;
	return Struct;
}
int Stuck_size(Magazine* Struct) {
	return Struct->Size;
}
int Stuck_Is_Empty(Magazine* Struct) {
	if (Struct->Index > 0) return 0;
	else return 1;
}
void Stuck_Expand(Magazine* Struct) {
	int i,size = Struct->Size, * NewMag;
	NewMag = (int*)calloc(size * 2, sizeof(int));
	assert(NewMag);
	for (i = 0; i < size; i++)
	{
		NewMag[i] = Struct->Arr[i];
	}
	free(Struct->Arr);
	Struct->Arr = NewMag;
	Struct->Size = size * 2;
}
void Stuck_Decrease(Magazine* Struct) {
	int i, size = Struct->Size, * NewMag;
	NewMag = (int*)calloc(size / 2, sizeof(int));
	assert(NewMag);
	for (i = 0; i < size/2; i++)
	{
		NewMag[i] = Struct->Arr[i];
	}
	free(Struct->Arr);
	Struct->Arr = NewMag;
	Struct->Size = size / 2;
}
void Stuck_Push(Magazine* Struct, int x) {
	if (Struct->Index == Struct->Size) Stuck_Expand(Struct);
	Struct->Arr[Struct->Index++] = x;
}
int Stuck_Top(Magazine* Struct) {
	if (Stuck_Is_Empty(Struct) == 1) return -1;
	else return Struct->Arr[Struct->Index - 1];
}
int Stuck_Pop(Magazine* Struct) {
	int p = Struct->Arr[(Struct->Index) - 1];
	Struct->Index--;
	if (Struct->Index == Struct->Size / 2 && Struct->Size > 1) Stuck_Decrease(Struct);
	return p;
}
void Stuck_print(Magazine* Struct) {
	int i;
	for (i = 0; i < Struct->Index; i++)
	{
		printf("%d", Struct->Arr[i]);
		if (Struct->Index != i + 1)printf(",");
	}
	printf("\n");
}

