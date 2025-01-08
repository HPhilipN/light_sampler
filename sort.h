
#ifndef _SORT_H_
#define _SORT_H_

void StartSort(void);
void EndSort(void);

void setArraySize(int newSize);
int  ArrLen(void);

int* fetchArrayData(int *length);

void bubbleSort(int arr[], int count);
void* sort();
void scramble(int arr[], int n);
void gen_array(int arr[], int n);
void print_arr(int arr[], int n);
int getArraySize();




#endif