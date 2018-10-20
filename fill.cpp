#include "stdafx.h"
#include "function_prototypes.h"

void fill_first_part(size_t i, const size_t size_array, int **array, int & numb)
{
	for (size_t j = 0; j <size_array; j++)
	{
		if ((i + j < size_array - 1) && (j > i))
		{
			array[j][i] = 0;
		}
		else
		{
			array[j][i] = numb;
			numb++;
		}
	}
}

void fill_second_part(size_t i, const size_t size_array, int **array, int & numb)
{
	for (size_t j = 0; j < size_array; j++)
	{
		if ((i + j > size_array - 1) && (j < i))
		{
			array[j][i] = 0;
		}
		else
		{
			array[j][i] = numb;
			numb++;
		}
	}
}

void fill_array(int ** array, const size_t size_array, int numb)
{
	size_t i;
	for (i = 0; i < int(size_array / 2); i++)
	{
		fill_first_part(i, size_array, array, numb);
	}

	for (i = int(size_array / 2); i <size_array; i++)
	{
		fill_second_part(i, size_array, array, numb);
	}
}
