#include <stdio.h>
#include <locale.h>
int main() {
	int dlina_ob = 12;
	int shirina_ob = 1;

	float dlina = 31.0;
	float shirina = 15.0;
	float zena_rulona = 220.0;

	int ploshad_ob = dlina_ob * shirina_ob;
	float ploshad_stena = dlina * shirina;

	setlocale(LC_ALL, "Russian");
	printf("Площадь обоев: %d", ploshad_ob);
	printf("\nПлощадь стены: %.2f", ploshad_stena);
	printf("\nКоличество рулонов: %.2f", ploshad_stena / ploshad_ob);
	printf("\nЦена всех рулонов: %.2f", (ploshad_stena / ploshad_ob) * zena_rulona);
}