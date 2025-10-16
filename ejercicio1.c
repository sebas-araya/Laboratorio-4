#include <stdio.h>

void printMatrix(int *ptr, int rows, int cols) {
	for (int i=0; i<rows; i++) {
		for (int j=0; j<cols; j++) {
			printf("%d\t", *(ptr + i*cols + j));
		}
		printf("\n");
	}
	printf("\n");
}

void printArray(int *ptr, int size) {
	for (int i=0; i<size; i++) {
		printf("%d ", *(ptr + i));
	}
	printf("\n");
}

void bubbleSortMatrix(int *ptr, int size) {
	int temp;
	for (int i=0; i<size-1; i++) {
		for(int j=0;j<size-1; j++) {
			if(*(ptr + j) < *(ptr + j + 1)) {
				temp = *(ptr+j);
				*(ptr+j)=*(ptr+j+1);
				*(ptr+j+1) = temp;
			}
		}
	}
}

int main() {
	int rows = 3;
	int cols=4;
	int matrix[3][4] = {
		{12,5,8,3},
		{7,1,9,4},
		{6,2,10,11}
	};

	int size=rows*cols;
	int *ptr = &matrix[0][0];

	printf("Matriz original: \n");
	printMatrix(ptr, rows, cols);

	printf("Arreglo unidimensional: \n");

	bubbleSortMatrix(ptr, size);
	printf("Arreglo ordenado: \n");
	printf("Matriz ordenada: \n");
	printMatrix(ptr, rows, cols);

	return 0;
}
