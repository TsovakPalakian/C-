#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

const int N = 150;

//void task_21() {
//	int **a = (int**)malloc(N * sizeof(int*));
//	for (int i = 0; i < N; ++i) {
//		a[i] = (int*)malloc(N * sizeof(int));
//	}
//
//	if (!a) {
//		exit(1);
//	}
//
//	srand(time(NULL));
//
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < N; ++j) {
//			a[i][j] = -10 + rand() % 21;
//		}
//	}
//
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < N; ++j) {
//			printf(" a[%d][%d] = %d ",i, j, a[i][j]);
//		}
//		printf("\n");
//	}
//
//	int sum = 0, mult = 1;
//
//	for (int i = 1; i < N; ++i) {
//		for (int j = 0; j < i; ++j) {
//			sum += *(*(a + i) + j);
//			mult *= *(*(a + i) + j);
//		}
//	}
//
//	printf("\n sum = %d, mult = %d \n", sum, mult);
//
//	for (int i = 0; i < N; ++i) {
//		free(a[i]);
//	}
//	free(a);
//
//	a = 0;
//}
//
//void task_22() {
//	int **a = (int**)malloc(N * sizeof(int*));
//	for (int i = 0; i < N; ++i) {
//		a[i] = (int*)malloc(N * sizeof(int));
//	}
//	if (!a) {
//		exit(0);
//	}
//
//	srand(time(NULL));
//
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < N; ++j) {
//			*(*(a + i) + j) = -10 + rand() % 21;
//		}
//	}
//
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < N; ++j) {
//			printf(" a[%d][%d] = %d", i, j, *(*(a + i) + j));
//		}
//		printf("\n");
//	}
//
//	int max = a[0][0], n = 0, m = 0;
//	int min = a[0][0], p = 0, r = 0;
//
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < N; ++j) {
//			if (max < a[i][j]) {
//				max = a[i][j];
//				n = i; 
//				m = j;
//			}
//			if (min > a[i][j]) {
//				min = a[i][j];
//				p = i; 
//				r = j;
//			}
//		}
//	}
//
//	printf("\n max = a[%d][%d] = %d\n", n, m, max);
//	printf("\n min = a[%d][%d] = %d\n", p, r, min);
//	printf("\n");
//
//	for (int i = 0; i < N; ++i) {
//		for (int k = N/2; k > 0; k /=2) {
//			int k1;
//			do {
//				k1 = 0, n, m;
//				for (n = 0, m = k; m < N; ++n, ++m) {
//					if (a[i][n] > a[i][m]) {
//						int tmp = a[i][n];
//						a[i][n] = a[i][m];
//						a[i][m] = tmp;
//						++k1;
//					}
//				}
//			} while(k1);
//		}
//	}
//
//	printf("\n");
//
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < N; ++j) {
//			printf(" a[%d][%d] = %d", i, j, *(*(a + i) + j));
//		}
//			printf("\n");
//	}
//	printf("\n");
//	if (i == 1) {
//		int i1 = 0, i2 = 0, i3 = 0;
//		while (i1 < N && i2 < N) {
//			if (a[i - 1][i1] < a[i][i2]) {
//
//			}
//		}
//	}
//
//	printf("\n");
//	fflush(stdin);
//	char **str = (char**)malloc(N);
//	str[18] = (char*)malloc(1 * sizeof(char));
//
//	str[18] = "   ";
//	gets(str[18]);
//}




void task_1() {
	char str[100];
	//gets(str);
	scanf_s("%s", &str);
	for (int i = 0; i < strlen(str); ++i) {
		printf(" %c\n", str[i]);
	}
}
void task_2() {
	char str[100];
	char rts[100];
	scanf_s("%s", &str);
	int i;
	for (i = 0; str[i]; ++i);
	for (int j = 0; j < i; ++j) {
		rts[i - j - 1] = str[j]; 
	}
	rts[i] = NULL;

	puts(rts);
}
void task_3() {
	char str[100];
	scanf_s("%s", &str);
	for (int i = 0; str[i]; ++i) {
		if (str[i] == 'a') {
			str[i] = '!';
		}
	}
	puts(str);
}
void task_4() {
	char str[100];
	scanf_s("%s", &str);
	int count = 0;
	int i;
	for (i = 0; str[i]; ++i) {
		if (str[i] == 'a') {
			++count;
		}
	}
	int tmp = str[0];
	str[0] = str[i - 1];
	str[i - 1] = tmp;
	printf(" counter = %d, %s", count, str);
}

void task_5() {
	char str[100];
	scanf_s("%s", &str);
	int count = 0;
	int i;
	for (i = 0; str[i]; ++i) {
		if (str[i] != ' ' && str[i + 1] == ' ') {
			++count;
		}
	}
	printf(" count_word = %d", count + 1);
}
