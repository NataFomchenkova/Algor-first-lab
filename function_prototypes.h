#pragma once

#include <iostream>
#include <conio.h>
using namespace std;
bool is_equal(int **array1, const size_t size_array1, int **array2, const size_t size_array2);
void delete_array(int ** array, const size_t size_array);
void print_array(int **array, const size_t size_array);
void fill_first_part(size_t i, const size_t size_array, int **array, int & numb);
void fill_second_part(size_t i, const size_t size_array, int **array, int & numb);
void fill_array(int ** array, const size_t size_array, int numb);

