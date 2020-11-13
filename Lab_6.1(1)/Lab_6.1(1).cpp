// 1 Спосіб --- "Ітераційний"
#include <iostream>
#include <time.h>
#include <iomanip>
#include <Windows.h>

void value_elements(int* b, const int elements, int Low, int High); // Формування масиву.
void vuvestu(int* b, const int elements);                           // Вивід масиву.
int ymova(int* b, const int elements);                              // Модифікація масиву за вказаним критерієм.
int suma(int* b, const int elements);                               // Сума елементів модифікованого масиву.                        

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand((unsigned)time(NULL));
	const int elements = 22;
	int b[elements];

	int Low = -40;
	int High = 50;

	value_elements(b, elements, Low, High);

	std::cout << "сформований масив: " << std::endl;
	std::cout << std::endl;
	vuvestu(b, elements);

	int kilkist = ymova(b, elements);

	std::cout << "Модифікований масив: " << std::endl;
	std::cout << std::endl;
	vuvestu(b, elements);

	int value = suma(b, elements);

	std::cout << "Сума елементів які задовольняють вказаному критерію: " << value << std::endl;
	std::cout << std::endl;
	std::cout << "Кількість елементів які задовольняють вказаному критерію: " << kilkist << std::endl;

	return 0;
}

void value_elements(int* b, const int elements, int Low, int High)
{
	int p_index = 0;
	for (int index = p_index; index < elements; index++)
	{
		b[index] = Low + rand() % (High - Low + 1);
	}
}

void vuvestu(int* b, const int elements)
{
	int p_index = 0;
	for (int index = p_index; index < elements; index++)
		std::cout << std::setw(5) << b[index];
	std::cout << std::endl;
	std::cout << std::endl;
}

int ymova(int* b, const int elements)
{
	int sum = 0;
	int p_index = 0;
	for (int index = p_index; index < elements; index++)
	{
		if (b[index] % 5 || b[index] == 0)
			sum += 1;
		else
			b[index] = 0;
	}

	return sum;
}

int suma(int* b, const int elements)
{
	int p_index = 0;
	int sum = 0;
	for (int index = p_index; index < elements; index++)
	{
		sum += b[index];
	}
	return sum;
}