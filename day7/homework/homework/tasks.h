template<typename T>
void array_revert(T *p, char data_type[]);
template<typename T>
void array_task_4(T *p, T &sum_positive, T &sum_negative, 
					   int &count_positive, int &count_negative, 
					   T &mult_positive_odd, T &mult_negative_odd);
template<typename T>
void array_swap(T *p, int array_size);
template<typename T>
void distance(T *x, T *y);
template<typename T>
void task_14(T *p, int column_count, int line_count);


template<typename T>
void array_revert(T *p, char data_type[]) {
	for (int i = N - 1; i >= 0; --i) {
		T prt = *(p + i);
		if (prt > -92559) {//спросить
			printf(data_type, i, prt);
		}
	}
}

template<typename T>
void array_task_4(T *p, T &sum_positive, T &sum_negative, 
					   int &count_positive, int &count_negative, 
					   T &mult_positive_odd, T &mult_negative_odd) {
	
	for (int i = 0; i < N - 1; i++) {
		T prt = *(p++);		
		if (prt > -858993460) {//спросить
			if (prt > 0) {
				sum_positive += prt; 
				count_positive++; 
				(i % 2 != 0) ? mult_positive_odd *= prt : 0;
			} else {
				sum_negative += prt; 
				count_negative++; 
				(i % 2 != 0) ? mult_negative_odd *= prt : 0;
			}
		}
	}
}

template<typename T>
void array_swap(T *p, int array_size) {
	int i_max, i_min;
	T max = *(p + 0);
	T min = *(p + array_size/2);
	for (int i = 1; i < array_size; ++i) {
		if (i < array_size/2) {			
			if (max < *(p + i)) {
				max = *(p + i);
				i_max = i;
			}
		} else {		
			if (min > *(p + i)) {
				min = *(p + i);
				i_min = i;
			}
		}
	}
	swap(p, i_max, i_min);
	for (int i = 0; i < 10; i++) {
		printf(" %d ", *p++);
	}
}

template<typename T>
void distance(T *x, T *y) {
	double z[50];
	double dis = 0;
	int n, m;
	for (int i = 0; i < 10; ++i) {
		for (int j = i + 1; j < 10; ++j) {
			*(z + i + j) = sqrt(pow((*(x + i) - *(x + j)),2.0) + pow((*(y + i) - *(y + j)),2.0));
			if (dis < *(z + i + j)) {
				dis = *(z + i + j);
				n = i; m = j;
			}
			printf("i = %d, j = %d, z = %lf \n", i, j, *(z + i + j));
		}
	}
	printf("(xi, yi) = (%d, %d);\n(xj, yj) = (%d, %d)\n dis = %lf \n",*(x + n) ,*(y + n) ,*(x + m) ,*(y + m) ,dis);
}
template<typename T>
void tasks_13(T *p, int column_count, int line_count) {
	int sum = 0;
	for (int i = 0; i < column_count; ++i) {
		for (int j = 0; j < line_count; ++j) {
			if (i == j) {
				sum += *(*(p + i) + j);
			}
		}
	}
	int tmp_up = *(*(p + 0) + 1);
	int tmp_down = *(*(p + 1) + 0);
	int up_i, up_j, down_i, down_j;
	for (int i = 0; i < column_count; ++i) {
		for (int j = i + 1; j < line_count; ++j) {
			if (tmp_up < *(*(p + i) + j)) {
				tmp_up = *(*(p + i) + j);
				up_i = i;
				up_j = j;
			}
		}
	}
	for (int i = 1; i < column_count; ++i) {
		for (int j = 0; j < i; ++j) {
			if (tmp_down > *(*(p + i) + j)) {
				tmp_down = *(*(p + i) + j);
				down_i = i;
				down_j = j;
			}
		}
	}
	printf(" sum = %d\n", sum);
	printf(" max[%d][%d]\n", up_i, up_j);
	printf(" min[%d][%d]\n", down_i, down_j);
}

template<typename T>
void task_14(T *p, int column_count, int line_count) {
	for (int j = 0; j < line_count; ++j) {
		for (int k = 1; k < column_count; ++k) {
			for (int i = 0; i < column_count - 1; ++i) {
				if (p[i][j] > p[i + 1][j]) {
					int tmp = p[i][j];
					p[i][j] = p[i + 1][j];
					p[i + 1][j] = tmp;
				}
			}
		}
	}
}

template<typename N, typename M, typename T>
void n_x_m(N &x, M &y, T &z) {
	int x_columns = sizeof(x)/sizeof(x[0]);
	int x_rows = sizeof(x[0])/sizeof(x[0][0]);
	int y_columns = sizeof(y)/sizeof(y[0]);
	int y_rows = sizeof(y[0])/sizeof(y[0][0]);
	
	if (x_rows != y_columns) {
		printf(" Matrix are not consistent");
		return;
	}
	for (int i = 0; i < x_columns; ++i) {
		for (int j = 0; j < y_rows; ++j) {
			z[i][j] = 0;
			for (int k = 0; k < x_rows; ++k) {
				z[i][j] += x[i][k] + y[k][j];
			}
		}
	}
}