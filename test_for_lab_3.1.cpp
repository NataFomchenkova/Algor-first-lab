#include "stdafx.h"
#include "CppUnitTest.h"
#include "../AaDS_laba_1/function_prototypes.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(check_function_is_equal)
		{
			const size_t size1 = 3;
			const size_t size2 = 5;
			int ** array1 = new int*[size1];
			int ** array2 = new int*[size2];
			for (size_t i = 0; i < size1; i++)
			{
				array1[i] = new int[size1];
			}
			for (size_t i = 0; i < size2; i++)
			{
				array2[i] = new int[size2];
			}

			int numb = -1;
			fill_array(array1, size1, numb);
			fill_array(array2, size2, numb);

			Assert::IsFalse(is_equal(array1, size1, array2, size2));
			delete_array(array1, size1);
			delete_array(array2, size2);
		}

		TEST_METHOD(check_for_size_1_1)
		{

			int ** array1 = new int*[1];
			int ** array2 = new int*[1];

			for (size_t i = 0; i < 1; i++)
			{

				array2[i] = new int[1];
			}

			array1[0] = new int[1]{1};

			const size_t size = 1;
			int numb = 1;
			fill_array(array2, size, numb);
			Assert::IsTrue(is_equal(array1, 1, array2, 1));
			delete_array(array1, 1);
			delete_array(array2, 1);
		}

		TEST_METHOD(check_for_size_2_2)
		{

			int ** array1 = new int*[2];
			int ** array2 = new int*[2];
			
			for (size_t i = 0; i < 2; i++)
			{

				array2[i] = new int[2];
			}

			array1[0] = new int[5]{ 1,3};
			array1[1] = new int[5]{ 2,4};

			const size_t size = 2;
			int numb = 1;
			fill_array(array2, size, numb);
			Assert::IsTrue(is_equal(array1, 2, array2, 2));
			delete_array(array1, 2);
			delete_array(array2, 2);
		}


		TEST_METHOD(check_for_an_odd_array)
		{


			int ** array1 = new int*[5];
			int ** array2 = new int*[5];
			for (size_t i = 0; i < 5; i++)
			{

				array2[i] = new int[5];
			}

			array1[0] = new int[5]{ 1,3,7,12,16 };
			array1[1] = new int[5]{ 0,4,8,13,0 };
			array1[2] = new int[5]{ 0,0,9,0,0 };
			array1[3] = new int[5]{ 0,5,10,14,0 },
			array1[4] = new int[5]{ 2,6,11,15,17 };

			const size_t size = 5;
			int numb = 1;
			fill_array(array2, size, numb);
			Assert::IsTrue(is_equal(array1, 5, array2, 5));
			delete_array(array1, 5); 
			delete_array(array2, 5);

		}

		TEST_METHOD(check_for_an_even_array)
		{

			int ** array1 = new int*[4];
			int ** array2 = new int*[4];
			for (size_t i = 0; i < 4; i++)
			{
				array2[i] = new int[4];
			}

			array1[0] = new int[5]{ 1,3,7,11 };
			array1[1] = new int[5]{ 0,4,8,0 };
			array1[2] = new int[5]{ 0,5,9,0 };
			array1[3] = new int[5]{ 2,6,10,12 };

			const size_t size = 4;
			int numb = 1;
			fill_array(array2, size, numb);

			Assert::IsTrue(is_equal(array1, 4, array2, 4));
			delete_array(array1, 4);
			delete_array(array2, 4);
		}
	};
}