#include <stdio.h>
#include <string.h>

void reemplazar_palabras(FILE *file_in, FILE *file_out, const char *encontrar, const char *reemplazar) {
	char word[256];
	while (fscanf(file_in, "%s", word) == 1) {
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

	FILE *file_out = fopen(output_filename, "w");
	if (!file_out) {
		printf("Error, no se puede crear el archivo");
		fclose(file_in);
		return 1;
	}

	reemplazar_palabras(file_in, file_out, encontrar, reemplazar);
	fclose(file_in);
	fclose(file_out);
	return 0;
}

int main (int argc, char *argv[]) {
	if (argc != 4) {
		printf("El programa se utiliza con el formato: '%s' se buscará palabra_a_buscar para reemplazar palabra_reemplazo. Debe pasar los argumentos\n", argv[0]);
		return 1;
	}

	const char *input_filename = argv[1];
	const char *encontrar=argv[2];
	const char *reemplazar=argv[3];
	const char *output_filename = "salida.txt";

	if (procesar_archivo(input_filename, output_filename, encontrar, reemplazar) == 0) {
		printf("Reemplazo completo. Resultado en el arvhico '%s' \n", output_filename);
	}
	return 0;
}
