#include <stdio.h>
#include <locale.h>
#include "head.h"

void main(void)
{
	double x, y, result;
	setlocale(LC_ALL, "Rus");		

	printf("1. Задание 1 \n2. Задание 2 \n");
	switch (getch())				
	{
	case '1':
		printf("x = ");
		scanf_s("%lf", &x);
		printf("y = ");
		scanf_s("%lf", &y);
		if (isInArea(x,y))
			printf("Точка находится в заштрихованной области");
		else
			printf("Точка не находится в заштрихованной области");
		break;

	case '2':
		printf("x = ");
		scanf_s("%lf", &x);
		result = f(x);
		printf("f = %lf", result);
		break;

	default:
		printf("Неверный ввод");
		break;
	}
}

