#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void write(FILE *p) {
	int n, x, i;
	scanf("%d", &n);
	for (i = 1; i <=n; ++i) {
		printf(" x = ");
		scanf("%d", &x);
		fprintf(p, "%d ", x);
	}
}
void read(FILE *p) {
	int n;

	if (!p) {
		exit(0);
	}
	while(!feof(p)) {
		if (fscanf(p, "%d", &n) == 1){
			printf("%d\n", n);		
		}
   }


}
void revert(FILE *p) {
	int x;
	if (!p) exit(1);
	fseek(p,0*sizeof(char), SEEK_END);
	int n = ftell(p);
	printf(" n = %d\n", n);
	for (int i = 4; i <= n; i += 5) {
		fseek(p,-i, SEEK_END);
		fscanf(p, "%d", &x);
		printf("%d\n", x);
	}
}
void main(void) {
	fflush(stdout);
	FILE *p;
	p = fopen("text.txt","rt");
	//pFile = fopen ("myfile.txt","w");
	// по умолчанию t; w - открыть текстовый файл для записи. 
	//если файла нет, то он создается, а если есть, то все стирает и записывает новые данные
	//r - read, если файла нет, то р = 0; a - для за писи в конец файла.
	//w+, r+, a+ запись чтение, чтение запись, читать с любой позиции
	//EOF - = -1; конец файла.
	//бинарный файл, 
	//p  = 0, если защищен от записи, неправильный путь. 
	//write(p);
	//read(p);
	//revert(p);
	//feof(); - если достигнут конец файла.
	//закрытие файла
	fclose(p);
	system("pause");
	//fprintf(p or stdout, "    ", ..... ); fputs(); - для записи в файл
	//
	//ввести числа, которые мы записываем в файл

}