#include <iostream>

using namespace std;

void randomize(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 100;
	}
}

void copy_mass(int* src, int* dest, int size)
{
	for (int i = 0; i < size; i++)
	{
		dest[i] = src[i];
	}
}

void show_mass(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << "\n";
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Выполнил Котов А.А. УМЛ-112\n";
	cout << "Программа для создания и копирования массива\n";
	int size = 10;
	int* arr = new int[size];
	int* arr2 = new int[size];
	randomize(arr, size);
	copy_mass(arr, arr2, size);
	cout << "Случайно сгенерированный массив: ";
	show_mass(arr, size);
	cout << "Скопированный массив: ";
	show_mass(arr2, size);
	system("pause");
}
