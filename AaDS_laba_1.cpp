#include "stdafx.h"
#include <iostream>
#include "function_prototypes.h"
using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Лабораторная работка №1" << endl << "Вариант №4\n";
	cout << "Реализуйте функцию fill_array()," << endl
		<< "заполняющую массив целыми числами по правилу \"песочные часы\"\n";
	int size_array;
	do
	{
		cout << "Введите размерность массива: ";
		cin >> size_array;
		if (size_array < 0)
			cout << "Размер должен быть положительным" << endl;
	} while (size_array<0);
	if (size_array > 0)
	{
		int **ptr_array = new int *[size_array];
		for (size_t i = 0; i < size_array; i++)
			ptr_array[i] = new int[size_array];
		int numb;
		cout << "Введите число, с которого будет начинаться заплнение массива: ";
		cin >> numb;
		fill_array(ptr_array, size_array, numb);
		print_array(ptr_array, size_array);
		delete_array(ptr_array, size_array);
	}
	_getch();
	return 0;
}
