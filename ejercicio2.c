#include <stdio.h>
#include <string.h>

void reemplazar_palabras(FILE *file_in, FILE *file_out, const char *encontrar, const char *reemplazar) {
	char word[256];
	while (fscanf(file_in, "%s", word) = 1) {
		if (strcmp(word, encontrar) == 0) {
			fputs(reemplazar, file_out);
		} else {
			fputs(word, file_out);
		}
		fputc(' ', file_out);
	}
}

int procesar_archivo(const char *input_filename, const char *output_filename, const char *encontrar, const char *reemplazar) {
	FILE *file_in = fopen(input_filename, "r");
	if (!file_in) {
		printf("Error, no se pudo abrir el archivo");
		return 1;
	}
