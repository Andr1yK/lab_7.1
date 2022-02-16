#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_7.1/lab_7.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71iter
{
	TEST_CLASS(UnitTest71iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int rowCount = 4;
			const int colCount = 4;

			int matrix[rowCount][colCount] = {
				{4, 4, 2, 2},
				{3, 1, 1, 1},
				{1, 2, 2, 3},
				{1, 2, 3, 4},
			};

			int sortedMatrix[rowCount][colCount] = {
				{ 2, 2, 4, 4 },
				{ 1, 1, 1, 3 },
				{ 3, 2, 2, 1 },
				{ 4, 3, 2, 1 },
			};

			int* matrixPointers[rowCount] = {
				matrix[0],
				matrix[1],
				matrix[2],
				matrix[3],
			};

			Sort(matrixPointers, rowCount, colCount);

			for (int row = 0; row < rowCount; row++)
				for (int column = 0; column < colCount; column++)
					Assert::AreEqual(sortedMatrix[row][column], matrix[row][column]);
		}
	};
}
