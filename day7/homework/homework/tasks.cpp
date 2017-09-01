#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include "prototype.h"

const int N = 100;

template<typename T>
int array_init(T *p, char data_type[]) {
	for (int i = 0; i < N; ++i) {
		printf("n[%d] = ", i);
		scanf(data_type, p++);
	}
	return N;
}

template<typename T>
int array_init(T *p, char data_type[], int size) {
	if(size >= N) {
		printf("Size out of range[%d]", N);
	} else {
		for (int i = 0; i < size; ++i) {
			printf("n[%d] = ", i);
			scanf(data_type, p++);
		}
		for (int i = size; i < N; ++i) {
			if(!*(p++)) i++;
		}
	}
	return size;
}

template<typename T>
int array_init(T *p, char data_type[], int from, int to) {
	if(from <= to && to > N) {
		printf("Size out of range[%d]", N);
	} else {
		for (int i = from; i < to; ++i) {
			printf("n[%d] = ", i);
			scanf(data_type, p++);
		}
		for (i = 0; i < N; ++i) {
			if(*(p++)) size++;
		}
	}
	return ;
}

template<typename T>
T array_sum(T *p) {
	int sum = 0;

	for (int i = 0; i < N; ++i) {
		T prt = *(p++);		
		if (prt != -858993460) {//спросить
			sum += prt;
		}
	}
	return sum;
}
template<typename T>
T array_sum(T *p, int to) {
	int sum = 0;

	for (int i = 0; i < to; ++i) {
		T prt = *(p++);		
		if (prt != -858993460) {//спросить
			sum += prt;
		}
	}
	return sum;
}
template<typename T>
T array_sum(T *p, int from, int to) {
	int sum = 0;

	for (from; from < to; ++from) {
		T prt = *(p + from);		
		if (prt != -858993460) {//спросить
			sum += prt;
		}
	}
	return sum;
}

int main(void) {
	int arr[N];
	int size = array_init(arr, "%d", 4);
	printf("sum = %d \n", array_sum(arr, 2, 4));
	printf("size = %d", size);
	//array_init_all(arr, "%d");
	//array_init(arr, "%d", 7);
	//array_sum(arr);
	//printf("n[%d] = ", array_sum(arr));
	//printf("n[%d] = ", array_init_all(arr, "%d"));
	system("pause");
}