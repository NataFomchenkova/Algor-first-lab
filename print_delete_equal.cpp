#include "stdafx.h"
#include <iomanip>
#include "function_prototypes.h"

void print_array(int **array, const size_t size_array)
{
	for (size_t i = 0; i < size_array; i++)
	{
		for (size_t j = 0; j < size_array; j++)
		{
			cout << setw(5) << array[i][j] << "    ";
		}
		cout << "\n";
	}
}


bool is_equal(int **array1, const size_t size_array1, int **array2, const size_t size_array2)
{

	if (size_array1 != size_array2) return false;
	for (size_t i = 0; i<size_array1; i++)
		for (size_t j = 0; j < size_array1; j++)
		{
			if (array2[i][j] != array1[i][j])
				return false;
		}
	return true;
}

void delete_array(int ** array, const size_t size_array)
{
	for (size_t i = 0; i < size_array; i++)
	{
		delete[]array[i];
	}
	delete[]array;
	array = nullptr;
	cout << "Массив удален";
}