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
	for (int=0; i<size; i++) {
		printf("%d ", *(ptr + i));
	}
	printf("\n");
}

void bubbleSortMatrix(int *ptr, int size) {
	int temp;
	for (int i=0; i<size-1; i++) {
		for(int=j;j<size-1; j++) {
			if(*(ptr + j) < *(ptr + j + 1)) {
				temp = *(ptr+j);
				*(ptr+j)=*(ptr+j+1=;
				*(ptr+j+1) = temp;
			{
		{
	{
{

int main() {

