#include <stdio.h>
#include <Windows.h>

void main() {
	int v1;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Введите температуру летом на улице в градусах Цельсия = ");
	scanf_s("%d", &v1);

	if (v1 < 13)
		printf("Мороз");
	if (v1 >= 13 && v1 < 18)
		printf("Холодно");
	if (v1 >= 18 && v1 < 26)
		printf("Тепло");
	if (v1 >= 26)
		printf("Жарко");
}