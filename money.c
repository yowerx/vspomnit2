#include <stdio.h>
#include <Windows.h>
#include <math.h>

void main() {
	int r;
	int i = 0;
	float n;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("¬ведите сумму = ");
	scanf_s("%d", &r);
	printf("¬ведите процент годовых = ");
	scanf_s("%f", &n);

	do {
		printf("%d RUB in %d years\n", r, i);
		i++;
		r = (r * (100 + n)) / 100;	
	} while (i <= 10);

}