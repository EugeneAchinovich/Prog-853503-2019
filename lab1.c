//Вариант 28

#include "pch.h"
#include <iostream>

int main()
{
	int k;						//Номер цифры последовательности, которую надо определить
	int number1 = 1;				//Первое из чисел, нужное для нахождения нового
	int number2 = 1;				//Второе из чисел, нужное для нахождения нового
	int nextNumber;					//Следующее число последовательности
	int numbers = 2;				//Количество чисел последовательности из чисел Фибоначчи
	printf("Enter k: ");
	scanf_s("%d", &k);
	while (numbers < k)						
	{
		nextNumber = number1 + number2;		//Получение нового числа
		number1 = number2;
		number2 = nextNumber;
		int digits = 1;
		while (nextNumber / digits > 0)		//numbers увеличивается на столько, сколько цифр в новом числе
		{
			numbers++;
			digits *= 10;
		}
	}
	printf("%s", "Number: ");
	if (k < 3)					//Если искомая цифра имеет номер 1 или 2, то вывести 1,
		printf("%d", 1);
	else {						//иначе вывести нужную цифру последнего
		while (numbers > k)			//найденного числа последовательности
		{
			numbers--;
			nextNumber /= 10;
		}
		printf("%d", nextNumber % 10);
	}
}
