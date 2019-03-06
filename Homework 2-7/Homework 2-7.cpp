#include "pch.h"
#include <stdio.h>


int main(void)
{
	int first, second, begin, end, is_even;
	printf("Input number one :");
	scanf_s("%d", &first);
	printf("Input number two :");
	scanf_s("%d", &second);

	if (first > second) //Определяем порядок чисел
	{
		begin = second;
		end = first;
	}
	else
	{
		begin = first;
		end = second;
	}

	is_even = (begin % 2); // Равно 1, если нечетное начальное число - прибавим к началу вывода четного ряда

	printf("\nPrintout even digits\n"); //Выводим четный ряд

	for (int i = begin + is_even; i < end; i++)
	{

		printf(" %d ", i);
		i++;
	}

	printf("\nPrintout odd digits\n"); //Выводим нечетный ряд

	for (int i = begin + (1 - is_even); i < end; i++)
	{

		printf(" %d ", i);
		i++;
	}
	printf("%d", is_even);

	printf("\nPrintout multiple 7 digits\n");  //Выводим кратные 7

	int i;
	(begin % 7) == 0 ? (i = begin) : (i = begin + (7 - (begin % 7))); //Проверяем что не начинается с кратного, 
																 //иначе увеличиваем начальное число
	for (; i < end; )
	{

		printf(" %d ", i);
		i += 7;
	}

	return 0;
}

