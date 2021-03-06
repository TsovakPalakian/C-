template<typename T>
T array_sum(T *p);
template<typename T>
T array_sum(T *p, int to);
template<typename T>
T array_sum(T *p, int from, int to);
template<typename T>
T array_sum_even(T *p);


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
	T sum = 0;

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

template<typename T>
T array_sum_even(T *p) {
	int sum = 0;

	for (int i = 2; i < N - 1; i++, i++/*спросить почему не работает i+2*/) {
		T prt = *(p + i);		
		if (prt > -858993460) {//спросить
			sum += prt;
		}
	}
	return sum;
}