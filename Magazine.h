#pragma once
typedef struct mag
{
	int* Arr;
	int Size;
	int Index;
}Magazine, magazine, Stack, stack;
Magazine Stack_Create();
int Stack_size(Magazine* Struct);
int Stack_Is_Empty(Magazine* Struct);
void Stack_Expand(Magazine* Struct);
void Stack_Decrease(Magazine* Struct);
void Stack_Push(Magazine* Struct, int x);
int Stack_Top(Magazine* Struct);
int Stack_Pop(Magazine* Struct);
void Stack_print(Magazine* Struct);