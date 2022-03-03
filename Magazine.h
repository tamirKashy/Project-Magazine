#pragma once
typedef struct mag
{
	int* Arr;
	int Size;
	int Index;
}Magazine, magazine, stuck, Stuck;
Magazine Stuck_Create();
int Stuck_size(Magazine* Struct);
int Stuck_Is_Empty(Magazine* Struct);
void Stuck_Expand(Magazine* Struct);
void Stuck_Decrease(Magazine* Struct);
void Stuck_Push(Magazine* Struct, int x);
int Stuck_Top(Magazine* Struct);
int Stuck_Pop(Magazine* Struct);
void Stuck_print(Magazine* Struct);